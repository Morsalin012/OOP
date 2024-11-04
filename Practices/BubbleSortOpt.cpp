//Optimized Bubble Sort
#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        bool swapped = false;
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int N;
    cout<<"Number of persons: ";
    cin>>N;
    int ages[N];
    cout<<"Enter the ages of "<<N<<" persons: "<<endl;
    for(int i=0; i<N; i++){
        cin>>ages[i];
    }
    cout<<"Sorted Ages: ";
    BubbleSort(ages, N);
    for(int i=0; i<N; i++){
        cout<<ages[i]<<" ";
    }
    return 0;
}