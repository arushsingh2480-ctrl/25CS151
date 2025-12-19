#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int flag=0;
    char key;
    cout << "Enter character to search: ";
    cin >> key;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == key) {
            cout << "Character found at position " <<i << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout << "Character not found" << endl;
    }
    return 0;
}