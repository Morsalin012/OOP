#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

float calForward(float p, int n) {
    float result = p;
    for (int i = 1; i < n; i++) result *= (p - i);
    return result;
}

float calBackward(float p, int n) {
    float result = p;
    for (int i = 1; i < n; i++) result *= (p + i);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    float x[20], y[20], diff[20][20] = {0};
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
        diff[i][0] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
        }
    }

    cout << "\nForward Difference Table:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) cout << diff[i][j] << "\t";
        cout << endl;
    }

    float x_value, h, p, interpolated_value;
    cout << "\nEnter the value of x for interpolation: ";
    cin >> x_value;

    cout << "\nChoose the type of interpolation:\n1. Forward Interpolation\n2. Backward Interpolation\n";
    int choice;
    cin >> choice;

    h = x[1] - x[0];
    if (choice == 1) {
        p = (x_value - x[0]) / h;
        interpolated_value = y[0];
        for (int i = 1; i < n; i++) {
            interpolated_value += (calForward(p, i) * diff[0][i]) / factorial(i);
        }
        cout << "\nThe interpolated value at x = " << x_value << " using Forward Interpolation is " << interpolated_value << endl;
    } else if (choice == 2) {
        p = (x_value - x[n - 1]) / h;
        interpolated_value = y[n - 1];
        for (int i = 1; i < n; i++) {
            interpolated_value += (calBackward(p, i) * diff[n - i - 1][i]) / factorial(i);
        }
        cout << "\nThe interpolated value at x = " << x_value << " using Backward Interpolation is " << interpolated_value << endl;
    } else {
        cout << "\nInvalid choice! Please select 1 or 2." << endl;
    }

    return 0;
}

