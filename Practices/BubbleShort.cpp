#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        // Last i elements are already in place
        for (int j=0; j<n-i-1; j++) {
            // Swap if the element is greater than the next element
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
    
    // Input the number of persons
    cout << "Number of persons (N): ";
    cin >> N;
    
    int ages[N];
    
    // Input the ages of N persons
    cout << "Enter the ages of " << N << " persons:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> ages[i];
    }
    
    // Sort the ages using bubble sort
    bubbleSort(ages, N);
    
    // Output the sorted ages
    cout << "Sorted Ages: ";
    for (int i = 0; i < N; i++) {
        cout << ages[i] << " ";
    }
    cout << endl;
    
    return 0;
}
