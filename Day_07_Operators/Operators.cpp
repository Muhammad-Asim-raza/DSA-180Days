#include <iostream>
using namespace std;
int main()
{
    //             ALL OPERATORS 
    // 1: Temperature Range: Write a program that checks
    //  if a given temperature is suitable for swimming.
    //   If the temperature is between 70 and 90 (Excluded)
    //    degrees Fahrenheit print yes, else NO.
    int temp;
    cout<<"Give Temperature in Fahrenheight: ";
    cin>>temp;
    if(temp<=90 && temp>=70){
        cout<<"Yes, Perfect temperature for swimming.";
    }else{
        cout<<"Not swimming friendly temperature.";
    }

    // 2: Even and Positive Number: Write a program that prints “YES” if a
    //  given number is both even and positive, otherwise it will print “NO”.
    int num;
    cout<<"Give Your Number: ";
    cin>>num;
    if(num%2==0 && num>0 ){
        cout<<"Your number is positive and even:";
    }else{
        cout<<"Your number is not positive and even: ";
    }

    // 3: Age Check: Implement a program that checks if a person is a teenager.
    //  A teenager is someone whose age is between 13 and 19 (inclusive).
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age<=18 && age>=13){
        cout<<"Your are a teenager:";
    }else{
        cout<<"Your are not a teenager: ";
    }

    // 4: Take three numbers a,b,c from the user, print yes if a is either
    //  greater than b or c. Otherwise print NO.
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b || a>c){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    
}