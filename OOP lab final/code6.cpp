//Write a program that overloads a constructor in the class in C++ 
#include<iostream>
using namespace std;
class integer{
    int m,n;
    public:
    integer(integer &x){
        m=x.m;
        n=x.n;
    }
    integer(){
        m=0;
        n=0;
    }
    integer(int x, int y){
        m=x;
        n=y;
    }
    void display(){
        cout<<"m: "<<m<<" and n: "<<n<<endl;
    }
};
int main(){
    integer int1;
    integer int2(10,20);
    integer int3(int2);
    int1.display();
    int2.display();
    int3.display();
    return 0;
}