#include <iostream>
using namespace std;
void modifyArray(int arr[], int n) {
for(int i = 0; i < n; i++) {
arr[i] = arr[i] * 2; 
}
}

int main() {
int arr[5] = {1, 2, 3, 4, 5};

cout << "Before modification: ";
for(int i = 0; i < 5; i++) {
cout << arr[i] << " ";
}
cout << endl;

modifyArray(arr, 5); 

}