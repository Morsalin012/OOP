#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void inItcounter(void){counter= 0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop :: setPrice(void){
    cout<<"Enter ID of your no "<<counter+1<<" Item: ";
    cin>>itemId[counter];
    cout<<"Enter Price of your Item: ";
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of Item with ID "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop s;
    s.inItcounter();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}
