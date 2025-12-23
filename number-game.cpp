#include <iostream>
#include <random>
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,100);
    
    int secret = dist(gen);
    int guess;

    cout<<"guess the number ";
    cin>>guess;
    cout<<"Random number was: "<<secret;
    return 0;
}