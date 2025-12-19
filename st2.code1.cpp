#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter size of matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"enter elements of matrix "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int sum=0;
for(int i=0;i<n;i++){
    sum += a[i][i];
    if(i!=(n - 1 - i)){
        sum += a[i][n - 1 - i];
    }
}
cout<<"sum of diagonals = "<<sum;
return 0;
}
