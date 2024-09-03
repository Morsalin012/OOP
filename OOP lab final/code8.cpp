//Write a program in C++ programming languages that prints out the Fibonacci series using a recursive function
#include <iostream>
using namespace std;
int fibonacci(int);
int main(){
    int n,f;
    cout<<"Enter the value: ";
    cin>>n;
    f=fibonacci(n);
    cout<<f;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}