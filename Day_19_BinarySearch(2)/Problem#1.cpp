#include <iostream>
using namespace std;
                //  BINARY SEARCH
    // 1. Return the Peak index in a Mountain Array
int mountainArray(int Arr[], int n){
    int start=0; int end=n-1; int mid;
    while(start<=end){
         mid=end + (start-end)/2;
         if(Arr[mid]>Arr[mid-1] && Arr[mid]>Arr[mid+1]){
            return mid;
         }else if(Arr[mid]>Arr[mid-1]){
            start= mid+1;
         }else{
            end= mid-1;
         }
    }return -1;
}
int main(){
   int Arr[1000];
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;
    cout << "Enter the Mountain Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int result= mountainArray(Arr, n);
    cout<<"The peak index in Mountain Array is " << result;
}