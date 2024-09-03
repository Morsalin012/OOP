//Write a program that can print the Fibonacci series, using the main function
#include<iostream>
using namespace std;
int main(){
    int n,i,arr[100];
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Fibonacci Number is: ";
    arr[0]=0;
    arr[1]=1;
    for(i=2; i<n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}