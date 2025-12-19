 #include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout <<"enter string= ";
    getline(cin,s);
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}