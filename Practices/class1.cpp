#include<iostream>
using namespace std;
class employee{
private:
    int a,b,c;
public:
    int d,e;
    int setdata(int a1, int b1, int c1);
    int getdata();
};
int employee::setdata(int a1, int b1, int c1){
    a=a1;
    b= b1;
    c= c1;
}
int employee::getdata(){
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<" The value of c is "<<c<<" The value of d is "<<d<<" The value of e is "<<e;
    /*cout<<"The out of b is "<<b<<endl;
    cout<<"The out of c is "<<c<<endl;
    cout<<"The out of d is "<<d<<endl;
    cout<<"The out of e is "<<e<<endl;*/
}
int main(){
    employee m;
    m.d=50;
    m.e=51;
    m.setdata(1,2,3);
    m.getdata();
    return 0;
}
