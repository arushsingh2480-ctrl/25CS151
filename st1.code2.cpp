#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num = i, sum = 0, digits = 0;
        int temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0) {
            int r = temp % 10;
            sum += pow(r, digits);
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }
    return 0;
}
