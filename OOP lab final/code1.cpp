//Write a program using a class that holds the account holder's name, Gmail, balance, and mobile number. Finally, print the information of 5 account holders that receive those values from the main function
#include<iostream>
using namespace std;
class emp{
    private:
    string name[100];
    string gmail[100];
    float balance[100];
    int number[100];
    public:
    int x,i;
    void getdata();
    void display();
};
void emp::getdata(){
    cout << "Enter the number of account holders: ";
    cin >> x;
    for(i=0; i<x; i++){
        cout << "Enter details for account holder " << (i + 1) << ":" << endl;
        cout<<"Name: ";
        cin>>name[i];
        cout<<"Gmail: ";
        cin>>gmail[i];
        cout<<"Balance: ";
        cin>>balance[i];
        cout<<"Number: ";
        cin>>number[i];
    }
}
void emp::display(){
    for(i=0; i<x; i++){
        cout<<"Details for Account holder "<<(i + 1)<<":" << endl;
        cout<<"Name: "<<name[i]<<", Gmail: "<<gmail[i]<< ", Balance: "<<balance[i]<< ", Number: " 
        <<number[i]<<endl;
    }
}
int main(void){
    emp e;
    e.getdata();
    e.display();
    return 0;
}