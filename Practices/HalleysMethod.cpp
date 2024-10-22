//Root finding by Halleys Method
#include<bits/stdc++.h>
using namespace std;
double a_co, b_co, c_co, d_co, e_co;

double func(double x){
    return a_co * pow(x, 4) + b_co * pow(x, 3) + c_co * pow(x, 2) + d_co * x + e_co;
}

double func1(double x){
    double h=0.000001;
    return (func(x+h)-func(x))/h;
}

double func2(double x){
    double h=0.000001;
    return (func1(x+h)-func1(x))/h;
}

void Halley(double a, double b){
    if (func(a)*func(b)>=0) {
        cout << "Invalid interval. The function must have opposite signs at a and b.\n";
        return;
    }
    double c= (a+b)/2;

    for (int i=0; i<1000; i++){
        double x= c-((2*func(c)*func1(c))/((2*pow(func1(c),2))-func(c)*func2(c)));
        
        if (func(x)<=0.000001 && func(x)>= -0.000001){
            cout<<"The Root is: "<<x<<endl;
            break;
        }
        else{
            c=x;
        }
    }
}


int main() {
    double a, b;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"Enter the coefficients of the equation (a*x^4 + b*x^3 + c*x^2 + d*x + e = 0): "<<endl;

    cout<<"Enter the coefficient of a_co: ";
    cin>>a_co;
    cout<<"Enter the coefficient of b_co: ";
    cin>>b_co;
    cout<<"Enter the coefficient of c_co: ";
    cin>>c_co;
    cout<<"Enter the coefficient of d_co: ";
    cin>>d_co;
    cout<<"Enter the constant term: ";
    cin>>e_co;

    Halley(a, b);

    return 0;
}
