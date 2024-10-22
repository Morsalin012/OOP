//Root finding by Bisection Method
#include <bits/stdc++.h>
using namespace std;

double a_co, b_co, c_co, d_co, e_co;

double sol(double x) {
    return a_co * pow(x, 4) + b_co * pow(x, 3) + c_co * pow(x, 2) + d_co * x + e_co;
}

int main() {
    cout << "Enter the coefficients of the equation (a*x^4 + b*x^3 + c*x^2 + d*x + e = 0): ";
    cin >> a_co >> b_co >> c_co >> d_co >> e_co;

    double a, b;
    cout << "Enter two points: ";
    cin >> a >> b;

    while (true) {
        double c = (a + b) / 2;
        if (sol(c) <= 0.000001 && sol(c) >= -0.000001) {
            cout << "Root: " << c;
            return 0;
        } else if (sol(a) * sol(c) < 0) {
            b = c;
        } else if (sol(c) * sol(b) < 0) {
            a = c;
        }
    }
    return 0;
}
