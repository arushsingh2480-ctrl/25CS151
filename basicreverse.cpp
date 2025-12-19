 #include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter string  ";
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<"reverse string: "<<s;
    return 0;
}
