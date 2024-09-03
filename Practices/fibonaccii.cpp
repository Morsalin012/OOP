#include<iostream>
using namespace std;
int main(){
    int n, i, Arr[100];
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci Number is: ";
    Arr[0] = 0;
    Arr[1] = 1;
    for(i = 2; i < n; i++){
        Arr[i] = Arr[i - 1] + Arr[i - 2];
    }
    for(int i = 0; i < n; i++){
        cout << Arr[i] << " ";
    }
    return 0;
}
