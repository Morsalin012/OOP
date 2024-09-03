#include<iostream>
using namespace std;
class Morsalin{
    protected:
    int a;
    public:
    void get_a(int n){
        a=n;
    }
};
class Fuhad{
    protected:
    int b;
    public:
    void get_b(int n){
        b=n;
    }
};
class New: public Morsalin, public Fuhad{
    public:
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"Addition of a and b is : "<<a+b;
    }
};
int main(){
    New n;
    n.get_a(30);
    n.get_b(70);
    n.display();
    return 0;
}