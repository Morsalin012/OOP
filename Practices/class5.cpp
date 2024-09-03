#include<iostream>
using namespace std;

class poultry
{
    int chickTagNo[100];
    int chickPrice[100];
    int counter;
    public :
    void initCounter(){counter = 0;}
    void setPrice();
    void displayPrice();
};

void poultry :: setPrice(){

    cout<<"Enter the tag "<<counter+1<<" no of the chicken : ";
    cin>>chickTagNo[counter];

    cout<<"Enter the Price of the chicken : ";
    cin>>chickPrice[counter];
    counter++;

}

void poultry :: displayPrice(){

    for (int i=0; i<counter;i++)
    {
        cout<<"The price of chicken with Tag No: "<<chickTagNo[i]<<" is :"<<chickPrice[i]<<endl;
    }
}
int main(){
    poultry chicken;
    chicken.initCounter();
    int n;
    cout<<"Enter how many chicken price you wanna see: ";
    cin>>n;
   for(int i=0;i<n;i++){
   chicken.setPrice();
   }
    chicken.displayPrice();
    return 0;
}
