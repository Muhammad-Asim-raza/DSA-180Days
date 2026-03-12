#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //               BUBBLE SORTING
//     1: Use Bubble Sort Algorithm to sort the array of integers
//        in decreasing order.
int Array[1000];
int value;
cout<<"Enter the size of an Array: ";
cin>>value;
for(int i=0; i<value; i++){
    cin>>Array[i];
}
for(int i=0; i<value-1; i++){
    bool check=0;
    for(int j=0; j< value-i-1; j++){
        if(Array[j]<Array[j+1]){
            check =1;
            swap(Array[j],Array[j+1]);
        }
    }if(check==0)
        break;
}
for(int i=0; i<value; i++){
    cout<<Array[i]<<" ";
}


}