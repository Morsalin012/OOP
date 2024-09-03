//Write a program that can print the Fibonacci series, using user-defined function
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int n, i;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci Number is: ";
    for(i=0; i<n; i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}