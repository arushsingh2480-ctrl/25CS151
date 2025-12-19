#include <iostream>
#include <string>
using namespace std;
class student{
    string name;
    int roll;

public:
void read(){
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter roll: ";
    getline(cin,roll);
    cin.ignore();
}
void display(){
    cout<<"enter name:"<<name;
    cout<<"enter roll:"<<roll
}
int main(){
    student s;
    s.read();
    s.display();
    return 0;
}
}