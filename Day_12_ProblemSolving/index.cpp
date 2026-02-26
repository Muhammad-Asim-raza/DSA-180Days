#include <iostream>
using namespace std;
#include <cmath>

     // Function for conversion of small lettter into capital letter
void convert(char name)
{
    char b = name-'a' + 'A';
    cout << b<<endl;
}

    //    Functions For Finding Armstrong number
int digits(int num){
    int count=0;
    while(num){
        count++;
        num/=10;
    }return count;
}
void Armstrong(int number, int digit){
    int n=number; int ans=0; int rem;
    while(n){
        rem=n%10;
        n/=10;
        ans+=pow(rem,digit);
    }
    if(ans==number){
        cout<<"Your Value is an Armstrong Number"<<endl;
    }else{
        cout<<"Your value is not an Armstrong Number"<<endl;
    }
}

            //   Function for Finding Rectangle
    void rect(int a,int b, int c, int d){
        if((a==b && c==d) || (a==c && b==d) ||(a==d && b==c) ){
            cout<<"Rectangle can be made from your values";
        }else{
            cout<<"Rectangle cannot be made from your values";
        }
    }
int main()
{
    // Convert Small letter into capital letter
    char letter;
    cout << "Enter Small Letter: ";
    cin >> letter;
    convert(letter);

    // Finding an Armstrong Number
    int num;
    cout<<"Enter Your Number: ";
    cin>>num;
    int numbers=digits(num);
    Armstrong(num,numbers);

    // values for rectangle
    int a,b,c,d;
    cout<<"Enter Your four Values; ";
    cin>>a>>b>>c>>d;
    rect(a,b,c,d);
}