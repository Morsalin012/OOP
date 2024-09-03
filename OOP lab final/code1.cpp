//Write a program using a class that holds the account holder's name, Gmail, balance, and mobile number. Finally, print the information of 5 account holders that receive those values from the main function
#include<iostream>
using namespace std;
class emp{
    private:
    string name;
    string gmail;
    float balance;
    int number;
    public:
    int x,i;
    void insert(string n, string g, float b, int num){
        name = n;
        gmail = g;
        balance = b;
        number = num;
    }
    void getdata();
    void display();
};
void emp::getdata(){
    cout<<"Account holders info you want to receive: ";
    cin>>x;
    for(i=0; i<x; i++){
        cout << "Enter details for account holder " << (i + 1) << ":" << endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Gmail: ";
        cin>>gmail;
        cout<<"Balance: ";
        cin>>balance;
        cout<<"Number: ";
        cin>>number;
    }
}
void emp::display(){
    for(i=0; i<x; i++){
        cout << "Details for Account holder " << (i + 1) << ":" << endl;
        cout << "Name: " << name << ", Gmail: " << gmail<< ", Balance: " << balance << ", Number: " 
        <<number << endl;
    }
}
int main(void){
    emp e;
    string name;
    string gmail;
    float balance;
    int number;
    e.insert(name,gmail,balance,number);
    e.getdata();
    e.display();
    return 0;
}