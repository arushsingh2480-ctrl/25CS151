#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    char ch;
    int i,found = -1;
    cout<<"enter string ";
    getline(cin,s1);
    cout<<"character to search ";
    cin>>ch;
    for(i = 0; i < s1.length(); i++) {
        if(s1.at(i) == ch) {
            found = i;
            break;
        }
    }
    if(found!=-1)
    cout<<"character is : "<<ch<<"found at : "<<found;
    else
    cout<<"character not found in string";
}

