#include <iostream>
using namespace std;

            //  FOR LOOPS PRACTICE QUESTIONS 
int main(){

        //  1. Print number from 280 to 250 with the help of for loop. 
        cout<<"Numbers from 280 to 250 Are: "<<endl;
        for(int i=280; i>=250; i--){
            cout<<i<<"  ";
        }
            cout<<endl<<endl;
    //      2. Print char from ‘A’ to ‘Z’ with the help of a for loop.
        char alpha;
        cout<<"Alphabets From A To Z: "<<endl;
        for(alpha='A'; alpha<='Z'; alpha++){
            cout<<alpha<<"  ";
        }
        cout<<endl<<endl;
        // 3.Print char from ‘Z’ to ‘A’ with the help of a for loop.
        char alphas;
        cout<<"Alphabets From Z To A: "<<endl;
        for(alphas='Z'; alphas>='A'; alphas--){
            cout<<alphas<<"  ";
        }
        cout<<endl<<endl;

    //     4.Print Sum of square of first n natural number.

        int num,sum;
        cout<<"Sum of square of first n natural numbers."<<endl;
        cout<<"Enter Your Number"<<endl;
        cin>>num;
        sum=0;
        for(int i=1; i<=num; i++){
           int square = i * i;  // Calculate square directly
           sum += square;  
        }
        cout << "Sum of square of first "<<num<<" Numbers is: "<< sum << endl<<endl;

        //  5.Print Sum of cube of first n natural number.
        int value;
        int sums=0;
        cout<<"Print Sum of cube of first n natural numbers."<<endl;
        cout<<"Enter Your number."<<endl;
        cin>>value;
        for(int i=1; i<=value; i++){
            int cube=i*i*i;
            sum=sum+cube;
        }
        cout<<"Sum of Cube of first "<<value<<" Numbers is: "<<sum<<endl<<endl;
}