#include <iostream>
using namespace std;

int main() {
    char str[50];
    cout<<"for this is the end hold your breath and count to ten";
    cin.getline(str,50);
    int len=strlen(str);
    cout<<len;
    return 0;
}