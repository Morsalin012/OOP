#include<iostream>
using namespace std;
struct employee{
    int id;
    string name;
    float salary;
};
int main(){
    struct employee m;
    m.id= 48;
    m.name= "Morsalin";
    m.salary= 120000;
    cout<<"ID: "<<m.id<<", Name of the employee is: "<<m.name<<" and the salary is: "<<m.salary;
    return 0;
}
