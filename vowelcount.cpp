#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"enter string ";
    getline(cin,s);
    int count=0;
    for(char c:s){
        tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o'||c=='u' ||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            count ++;
        }
    }
    cout<<"total vowels   "<<count;
}

