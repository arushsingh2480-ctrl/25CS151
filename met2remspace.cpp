 #include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter string  ";
    getline(cin,s);
    s.erase((s.begin(),s.end(),' '));
    cout<<s;
    return 0;
}
