//Write a program that following the multiple inheritance patterns where the base class defines the same function name-calling by the derived class.
#include<iostream>
using namespace std;
class Morsalin{
    public:
    void display(){
        cout<<"Morsalin"<<endl;
    }
};
class Fuhad{
    public:
    void display(){
        cout<<"Fuhad"<<endl;
    }
};
class New:public Morsalin, public Fuhad{
    public:
    void display(){
        Morsalin::display();
        Fuhad::display();
    }
};
int main(){
    New n;
    n.display();
    return 0;
}