#include<iostream>
using namespace std;
int main(){
char ch;

cout << "Enter a character: ";
cin >> ch;
// Convert uppercase to lowercase
ch = tolower(ch);

if (isalpha(ch)) {
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
cout << "The character is a vowel." << endl;
} else {
cout << "The character is a consonant." << endl;
        }
    } else {
        cout << "The entered character is not an alphabet letter." << endl;
    }


}



