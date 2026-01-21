#include <iostream>
using namespace std;

int main() {
   
    // 1. Take inputs from user and sum them.
    int a, b, c;

    cout << "Enter your first number: ";
    cin >> a;

    cout << "Enter your second number: ";
    cin >> b;

    c = a + b;  // Now both a and b have valid values

    cout << "Sum of your numbers is: " << c << endl;

    return 0;
}
