#include <iostream>
using namespace std;
int main() {
    char str(100);
    int start,length;
    cout<<"enter string: ";
    getline(str,100);
    cout<<"enter starting index: ";
    cin>>start;
    cout<<"enter length of substring: ";
    cin>>length;
    
    char sub[100];
    
    int j=0;
    for (int i = start; i < start + length; i++) {
        sub[j] = str[i];
        j++;
    }
    sun[j]='\0';
    cout<<"substring: "<<sub;
    

}
//write a prog to extract a substring from a character array
//to compute length of your name using length function in a string
//at function is used to print the index of a specified fun in a string
//r find function is used to findof the last occurence of a specific
//character or a substring within a fuction