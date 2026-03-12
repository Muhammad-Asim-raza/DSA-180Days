#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //             BUBBLE SORTING
//     3: Bubble Sort Algorithm to sort the array of char in ascending order.
char Array[1000];
int num;
cout<<"Enter size of an array: ";
cin>>num;
for(int i=0; i<num; i++){
    cin>>Array[i];
}
for(int i=0; i<num-1; i++){
    bool swaped=0;
    for(int j=0; j<num-i-1; j++){
       if(Array[j]>Array[j+1]){
        swaped =1;
        swap(Array[j],Array[j+1]);
       }
    }
    if (swaped==0)
    break;
}
for(int i=0; i<num; i++){
    cout<<Array[i]<<" ";
}
}

