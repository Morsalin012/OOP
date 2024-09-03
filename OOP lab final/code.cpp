//Write a program using a class that holds the account holder's name, Gmail, balance, and mobile number. Finally, print the information of 5 account holders that receive those values from the main function.
#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
private:
    string name;
    string gmail;
    float balance;
    int mobileNumber;

public:
    
    void insert(string n, string g, float b, int m) {
        name = n;
        gmail = g;
        balance = b;
        mobileNumber = m;
    }

    void display() {
        cout << "Name: " << name << "\n"
             << "Gmail: " << gmail << "\n"
             << "Balance: $" << balance << "\n"
             << "Mobile Number: " << mobileNumber << "\n"
             << "----------------------------------------" << endl;
    }
};

int main() {
    string name, gmail;
    int mobileNumber;
    float balance;
    int numAccountHolders = 5;
    AccountHolder accountHolders[numAccountHolders];

    
    for (int i =0; i < numAccountHolders; ++i) {

        cout << "Enter details for account holder " << (i + 1) << ":" << endl;
        cout << "Name: ";
        cin>>name;
        cout << "Gmail: ";
        cin>> gmail;
        cout << "Balance: ";
        cin >> balance;
        cout << "Mobile Number: ";
        cin>> mobileNumber;

        accountHolders[i].insert(name, gmail, balance, mobileNumber);
    }

    
    cout << "\nAccount Holder Information:\n";
    for (int i = 0; i < numAccountHolders; ++i) {
        accountHolders[i].display();
    }

    return 0;
}