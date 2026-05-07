#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Explicit type casting
    int asciiValue = (int)ch;

    cout << "Character entered: " << ch << endl;
    cout << "ASCII value: " << asciiValue << endl;

}

