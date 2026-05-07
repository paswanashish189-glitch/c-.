#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
    result = a*a + 2*a*b + b*b;
    cout << "The value of (a + b)^2 is: " << result << endl;

}
