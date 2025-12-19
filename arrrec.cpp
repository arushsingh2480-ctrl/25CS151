#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"reversed: ";
    for(int i=n-1;n>=0;i--)
    cout<<arr[i]<<" ";
    return 0;
}