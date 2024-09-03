#include<iostream>
using namespace std;
class Morsalin{
public:
    int ID;
    string Name;
    float Salary;
    Morsalin(int i, string n, float s){
        ID= i;
        Name= n;
        Salary= s;
    }
    void display(){
        cout<<ID<<" "<<Name<<" "<<Salary<<endl;
    }
};
int main(void){
    Morsalin e1= Morsalin(48, "Morsalin", 35000);
    Morsalin e2= Morsalin(49, "Morsalin", 45000);
    e1.display();
    e2.display();
    return 0;
}
