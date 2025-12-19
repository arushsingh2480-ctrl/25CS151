#include <iostream>
#include<algorithm>
using namespace std;
    float greatest(float a,float b,float c){
        if(a>b && a>c)
        return a;
        else if(b>c)
        return b;
        else
        return c;
    }
    int main() {
        int x,y,z;
        cout<<"Enter 3 numbers: ";
        cin>>x>>y>>z;
        cout<<"Greatest number: "<<greatest(x,y,z);
    }
