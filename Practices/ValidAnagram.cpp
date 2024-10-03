//Valid Anagram
#include<iostream>
using namespace std;

bool isangram(string s, string t) {
    if(s.length() != t.length()) return false;

    int character[26]={0};

    for(int i=0; i<s.length(); i++) {
        character[s[i]-'a']++;
        character[t[i]-'a']--;
    }

    for(int i=0; i<26; i++) {
        if(character[i] != 0) return false;
    }

    return true;
}

int main() {
    string s, t;
    cout<<"Write the first word: ";
    cin>>s;

    cout<<"Write the second word: ";
    cin>>t;

    if(isangram(s, t)) {
        cout<<"It is an anagram"<<endl;
    } else {
        cout<<"It is not an anagram"<<endl;
    }

    return 0;
}
