#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cout << "Number of persons (N): ";
    cin >> N;
    int ages[N];
    cout << "Enter the ages of " << N << " persons:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> ages[i];
    }
    bubbleSort(ages, N);
    cout << "Sorted Ages: ";
    for (int i = 0; i < N; i++) {
        cout << ages[i] << " ";
    }
    cout << endl;  
    return 0;
}
