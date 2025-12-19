 #include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char c;
    getline(cin,s);
    cin>>c;
    for(int i=0;i<s.length();i++){
    if(islower(s[i])){
        s[i]=toupper(s[i]);
    if(isupper(s[i])){
        s[i]=tolower(s[i]);
    }
    }
}
cout<<s;
return 0;
}