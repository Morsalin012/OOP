//Write a program that can print the Fibonacci series using constructor
#include<iostream>
using namespace std;
class fibo{
    private:
    int arr[50],n;
    public:
    fibo(int num){
        arr[0]=0;
        arr[1]=1;
        n= num;
    }
    int fibonacci(){
        for(int i=2; i<n; i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
    int display(){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci Number is : ";
    fibo o(n);
    o.fibonacci();
    o.display();
    return 0;
}
