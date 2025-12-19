#include <iostream>
using namespace std;

int main() {
    string s;
    int start,length;
    cout<<"enter string: ";
    getline(cin,s);
    cout<<"enter starting index: ";
    cin>>start;
    cout<<"enter length of substring: ";
    cin>>length;
    
    char sub[100];
    
    int j=0;
    for (int i = start; i < start + length; i++) {
        sub[j] = s[i];
        j++;
    }
    s[j]='\0';
    cout<<"substring: "<<sub;
    

}