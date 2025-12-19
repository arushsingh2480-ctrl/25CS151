 #include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"enter string ";
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(i==0||s[i-1]==' ')
        count++;
    }
    cout<<"total word: "<<count;
}