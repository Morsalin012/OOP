#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    int setData(int a1, int b1, int c1);
    int getData();
};
int employee::setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int employee::getData(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<"The value of e is: "<<e<<endl;
}
int main(){
    employee m;
    m.d= 48;
    m.e= 120000;
    m.setData(1,2,4);
    m.getData();
    return 0;
}