#include <iostream>
using namespace std;

int main() {
int n1, n2;
cout << "Enter two integers: ";
cin >> n1 >> n2;
if (n2 == 0) {
cout << "Division by zero is not allowed." ;
} else
{
int quotient = n1 / n2;
int remainder = n1 % n2;
cout << "Quotient = " << quotient;
cout << "Remainder = " << remainder;
    }

}
