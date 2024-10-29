//Linear Interpolation Formula
#include<bits/stdc++.h>
using namespace std;

double linearInterpolation(double x, double x1, double x2, double y1, double y2){
    return y1+((x-x1)*(y2-y1))/(x2-x1);
}
int main(){
    double x,x1,x2,y1,y2;
    cout<<"Linear Interpolation Formula: y=y1+((x-x1)*(y2-y1))/(x2-x1)\n";

    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    cout<<"Enter the value of x2: ";
    cin>>x2;
    cout<<"Enter the value of y1: ";
    cin>>y1;
    cout<<"Enter the value of y2: ";
    cin>>y2;

    cout<<"The value of y at x is: "<<linearInterpolation(x,x1,x2,y1,y2)<<endl;
    return 0;
}
