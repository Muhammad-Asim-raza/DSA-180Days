#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number to convert it into binary: ";
    cin >> num;
    int rem, mul = 1, ans = 0;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans << endl;

    int value;
    cout << "Enter your binary number: ";
    cin >> value;
    int reminder, answer = 0, multiply = 1;
    while (value > 0)
    {
        reminder = value % 10;
        value /= 10;
        answer += reminder * multiply;
        multiply *= 2;
    }
    cout << answer << endl;
    int val;
    cout << "Enter Your Value to convert it into OCTAL: ";
    cin >> val;
    int remi, answ = 0, mult = 1;
    while (val > 0)
    {
        remi = val % 8;
        val /= 8;
        answ += remi * mult;
        mult *= 10;
    }
    cout << answ << endl;
    int input;
    cout << "Enter your octal number to convert it into decimal: ";
    cin >> input;
    int reminders, answers = 0, multiplies = 1;
    while (input > 0)
    {
        reminders = input % 10;
        input /= 10;
        answers += reminders * multiplies;
        multiplies *= 8;
    }
    cout << answers << endl;
}