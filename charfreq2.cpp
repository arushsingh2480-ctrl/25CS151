 #include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter string  ";
    getline(cin,s);
    int target='a';
    int count = 0;
    for(int i=0;i<s.length();i++){
        if (s[i]==target)
        count++;
    }
    cout<<count;
    return 0;
}