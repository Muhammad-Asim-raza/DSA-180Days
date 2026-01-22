#include <iostream>
using namespace std;
int main(){
        //                IF-ELSE EXCERCISES
        //   1.Two numbers are given, print the bigger number, It is 
        //       is given that both numbers can’t be the same.
        int num1;
        int num2;
        cout<<"Print The Bigger Number"<<endl;
        cout<<"Enter Your First Number. ";
        cin>>num1;
        cout<<"Enter Your Second Number. ";
        cin>>num2;
        if(num1>num2){
            cout<<"The Bigger Number Is: "<<num1<<endl<<endl;
        }else if(num1==num2){
            cout<<"Both Numbers Are Equal."<<endl<<endl;
        }else{
            cout<<"The Bigger Number Is: "<<num2<<endl<<endl;
        }

        // 2.Age of a person is given, print Adult if his/her age is 
        //       greater than 18, otherwise print Teenager.
        int age;
        cout<<"Find If You Are Adult Or Teenager: "<<endl;
        cout<<"Enter Your Age: ";
        cin>>age;
        if(age>=18){
            cout<<"Adult"<<endl<<endl;
        }else{
            cout<<"Teenager"<<endl<<endl;
        }

        // 3.Take a number in input (ex n) and print the corresponding month to it. 
        //      Ex: for n=1, print january, n=2, print feburary like this you
        //      need to give output. It is given that n will be greater than 
        //      0 and less than 13.
        int input;
        cout<<"Print The Corresponding Month to The Value you Give: "<<endl;
        cout<<"Enter Your Number: ";
        cin>>input;
        if(input==1){
            cout<<"It Represents January:"<<endl<<endl;
        }else if(input==2){
            cout<<"It Represents February: "<<endl<<endl;
        }else if(input==3){
            cout<<"It Represents March: "<<endl<<endl;
        }else if(input==4){
            cout<<"It Represents April: "<<endl<<endl;
        }else if(input==5){
            cout<<"It Represents May: "<<endl<<endl;
        }else if(input==6){
            cout<<"It Represents June: "<<endl<<endl;
        }else if(input==7){
            cout<<"It Represents July: "<<endl<<endl;
        }else if(input==8){
            cout<<"It Represents August: "<<endl<<endl;
        }else if(input==9){
            cout<<"It Represents September: "<<endl<<endl;
        }else if(input==10){
            cout<<"It Represents October: "<<endl<<endl;
        }else if(input==11){
            cout<<"It Represents November: "<<endl<<endl;
        }else if(input==12){
            cout<<"It Represents December: "<<endl<<endl;
        }else{
            cout<<"Input a Valid Number."<<endl<<endl;
        }

        //             FOR LOOP EXCERCISE
        // 1.Print “Pakistan will win the World Cup 2027”, 20 times.
       int numb;
       cout<<"Print Pakistan will win the World Cup Of 2027: "<<endl;
       cout<<"Enter Your Number: ";
       cin>>numb;
        for(int i=1; i<=numb; i++){
            cout<<"Pakistan will win the World Cup 2027:"<<endl;
        }

        // 2.Print all numbers from 1 to n, which is divisible by 4. Take n
        //              as an input from the user.
        int n;
        cout<<"Print Numbers Which Are Divisible By 4 Upto Given Number: "<<endl;
        cout<<"Enter Your Number: ";
        cin>>n;
        cout<<"These Numbers Are Divisible By 4: "<<endl;
        for(int i=1; i<=n; i=i+1){   
            if(i%4==0){
                cout<<i<<endl;
            }
        }

}