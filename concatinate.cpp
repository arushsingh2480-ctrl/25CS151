#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cout<<"first string";
    getline(cin,a);
    cout<<"second string";
    getline(cin,b);
    string c = a + " " + b;
    cout<<"concatinate=  "<<c;
    return 0;
}