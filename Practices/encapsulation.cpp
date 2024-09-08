#include<iostream>
using namespace std;
class rectangle{
private:
    float length;
    float width;
public:
    rectangle(float l,float w){
        length=l;
        width=w;
    }
    float perameter(){
        return 2*(length+width);
    }
    float area(){
        return length*width;
    }
    float getlenth(){
        return length;
    }
    void setlenth(float l){
        if(l>0){
            length=l;
        }
        else
            cout<<"The value of length should be positive";
    }
    float getwidth(){
        return width;
    }
    void setwidth(float w){
        if(w>0){
            width=w;
        }
        else
            cout<<"The value should be in positive";
    }
};
int main(){
    float p,q,a,b;
    cout<<"Input the value of lenth: ";
    cin>>p;
    cout<<"Input the value of width: ";
    cin>>q;
    rectangle r(p,q);
    cout<<"The value of area of the rectangle is: "<<r.perameter()<<endl;
    cout<<"Input the value of new length: ";
    cin>>a;
    cout<<"Input the value of new width: ";
    cin>>b;
    r.setlenth(a);
    r.setwidth(b);
    cout<<"Area is: "<<r.area();
    return 0;
}