 #include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter string ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')continue;
    int count=0;
    for(int j=0;j<s.length();j++){
        if(s[i]==s[j])
        count++;
    }
    if (count==1){
        cout<<s[i];
        return 0;
    }  
}
   cout<<-1;
}

