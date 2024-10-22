#include<bits/stdc++.h>
using namespace std;

double a_co, b_co, c_co, d_co, e_co;

double func(double x) {
    return a_co * pow(x, 4) + b_co * pow(x, 3) + c_co * pow(x, 2) + d_co * x + e_co;
}

void FalsePosi(double x0, double x1) {
    if (func(x0)*func(x1)>=0){
        cout << "Invalid interval. The function must have opposite signs at a and b.\n";
        return;
    }

    double x2;

    for (int i=0; i<1000; i++) {
        x2 = x0-((func(x0)*(x1-x0))/(func(x1)-func(x0)));

        if (func(x2)<= 0.000001 && func(x2)>= -0.000001)
            break;

        if (func(x2) * func(x0)<0)
            x1 = x2;
        else
            x0 = x2;
    }

    cout << "The root is: "<<x2<<endl;
}

int main(){
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

    FalsePosi(a,b);

    return 0;
}
