 #include <iostream>
#include <string>
using namespace std;

int main() {
int age;
char name[50];
cout<<"enter your age: ";
cin>>age;
cin.ignore();
cout<<"enter your name: ";
cin.getline(name,50);
cout<<age;
cout<<name;
return 0;
}
    