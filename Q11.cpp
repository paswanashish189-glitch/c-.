#include <iostream>
using namespace std;

int main() {
    float mark1, mark2, mark3;
    float total, percentage;


    cout << "Enter marks of three subjects: ";
    cin >> mark1 >> mark2 >> mark3;

    total = mark1 + mark2 + mark3;
    percentage = total / 3;

    cout << "Total Marks = " << total;
    cout << "Percentage = " << percentage << "%" ;

}
