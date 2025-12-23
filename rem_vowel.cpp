#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    for(int i=0; i<s.length();i++){
        for(char ch = s[i])
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
        s.erase(i,1);
    }
    }
    cout<<s;
    return 0;
}