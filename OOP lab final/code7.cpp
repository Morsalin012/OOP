//Write a program that inherits the private data members in the class using the friend function.
#include<iostream>
using namespace std;
class box{
    private:
    int length;
    public:
    box():length(0){}
    friend int printlength(box);
};
int printlength(box b){
    b.length= b.length + 10;
    return b.length;
}
int main(){
    box b;
    cout<<"Length of box: "<<printlength(b)<<endl;
    return 0;
}