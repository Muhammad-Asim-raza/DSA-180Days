#include <iostream>
using namespace std;
int main()
{
    //    FINDING SUM OF DIGITS TO A SINGLE DIGIT 
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    cout << num << endl;

    // Finding your year is a leap yyear or not
    int year;
    cout << "Enter your Year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "Given Year is a Leap Year";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "Given Year is a Leap Year";
    }
    else
    {
        cout << "Given Year is not a Leap Year";
    }
    cout << endl;

    // Reversing the integer Number
    int numb;
    int remin, answe = 0;
    cout << "Enter Your Digits to Reverse it: ";
    cin >> numb;
    while (numb > 0)
    {
        remin = numb % 10;
        numb /= 10;
        answe = answe * 10 + remin;
    }
    cout << answe << endl;

    // FINDING THE VALUE IS A POWERE OF 2 OR NOT 
    int value;
    cout << "Enter Your Value: ";
    cin >> value;
    if (value < 1)
    {
        cout << "Your value is not a power of 2";
    }
    while (value != 1)
    {
        if (value % 2 == 1)
        {
            cout << "Your value is not a power of 2";
        }
        else
        {
            cout << "Your value is a power of 2";
        }
    }
    cout << endl;

    //  FINDING EITHER THE VALUE IS A PALLINDROM OR NOT 
    int number;
    cout << "Enter Your Number: ";
    cin >> number;
    int remindar, answer = 0;
    int result = number;
    while (number > 0)
    {
        remindar = number % 10;
        number /= 10;
        answer = answer * 10 + remindar;
    }
    if (answer == result)
    {
        cout << "Your value is a pallindrom value" << endl;
    }
}