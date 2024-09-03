#include<iostream>
using namespace std;
class Morsalin{
public:
    void display(){
        cout<<"Muhammad Morsalin"<<endl;
    }
};
class Fuhad{
public:
    void display(){
        cout<<"Fuhad Alam"<<endl;
    }
};
class New: public Morsalin, public Fuhad{
public:
    void view(){
        Morsalin :: display();
        Fuhad :: display();
    }
};
int main(){
    New n;
    n.view();
    return 0;
}
