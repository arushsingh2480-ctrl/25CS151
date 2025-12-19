#include <iostream>
using namespace std;

    float areacircle(float r){
    return 3.14* r *r;
    }
    float arearectangle(float l,float b){
        return l * b;
    }
    int main(){
        int r,l,b;
        cout<<"enter radius: ";
        cin>>r;
        cout<<"area of circle: "<<areacircle(r)<<endl;
        
    }
