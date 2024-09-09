#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Eating.."<<endl;
    }
};
class dog: public animal{
    public:
    void bark(){
        cout<<"Barking.."<<endl;
    }

};
class babyDog: public dog{
    public:
    void weep(){
        cout<<"Weeping.."<<endl;
    }
};
int main(){
    babyDog d;
    d.eat();
    d.bark();
    d.weep();
    return 0;
}