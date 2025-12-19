#include <iostream>
#include <string>
using namespace std;

int main() {
    string str="hello world";
    cout<<str.at(0)<<endl;
    cout<<str.at(5)<<endl;
    cout<<str.at(10)<<endl;
    string str1="hello world";
    str1.replace(0, 5,"hi");
    cout<<str1<<endl;
}
