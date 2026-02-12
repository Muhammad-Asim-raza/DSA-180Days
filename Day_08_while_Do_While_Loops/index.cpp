#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Table for a number: ";
    cin>>n;
    int i=1;
    while (i<=10)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }cout<<endl;
    
    int num;
    cout<<"Enter a number to find its factors: ";
    cin>>num;
    int j=1;
    cout<<"Your Factors for "<<num<<" are: ";
    while (j<=num)
    {
        if(num%j==0){
            cout<<j<<" ";
        }
        j++;
    }cout<<endl<<endl;

    int sum=0;
    int number;
    cout<<"Enter your number to find sum of its natural numbers: "<<endl;
    cin>>number;
    int k=1;
    do{
        sum+=k;
        cout<<sum<<" ";
        k++;
    }while(k<=number);
    cout<<endl<<endl;
}