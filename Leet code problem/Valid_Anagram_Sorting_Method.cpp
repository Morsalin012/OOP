//Valid Anagram Using Sorting Method
#include<iostream>
#include<algorithm>
using namespace std;

bool isangram(string s, string t){
    if(s.length() != t.length()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s==t;
}

int main(){
    string s,t;
    cout<<"Write the first word: ";
    cin>>s;

    cout<<"Write the second word: ";
    cin>>t;

    if(isangram(s,t)){
        cout<<"It is an anagram"<<endl;
    }
    else{
        cout<<"It is not an anagram"<<endl;
    }
    return 0;
}