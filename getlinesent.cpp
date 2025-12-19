#include <iostream>
using namespace std;

int main() {
    char sentence[59];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 59);
    cout << "You entered: " << sentence;
}