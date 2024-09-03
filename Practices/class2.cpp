#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};
void binary::read(){
    cout<<"Enter a binary number: ";
    cin>>s;
}
void binary::chk_bin(){
    int i;
    for(i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary format"<<endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(){
    int i;
    for(i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary::display(){
    cout<<"Displaying your binary Number"<<endl;
     for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
     }
     cout<<endl;
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
