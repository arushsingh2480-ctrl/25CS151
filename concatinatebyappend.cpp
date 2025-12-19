#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout<<"enter first: ";
    getline(cin,s1);
    cout<<"enter second: ";
    getline(cin,s2);
    s1.append(s2);
    cout<<s1;
}