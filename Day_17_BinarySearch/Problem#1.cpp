#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int num, int key){
    int start=0;
    int end= num-1;
    int mid;
    while(start<=end){
        mid=start + (end-start)/2;
     // To avoid integer overflow we avoid writing start + end/2 directly
     if(arr[mid]<key){
        start=mid+1;
     }else if(arr[mid]==key){
        return mid;
     }else{
        end=mid-1;
     }
    }return -1;
}
int main(){
    //            BINARY SEARCH
    // 1: An array is given in increasing order with Key, Find the index
    //    of key, if key is not present, print -1;
    int Arr[1000];
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    cout<<"Enter the elements in increasing order: ";
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<binarySearch(Arr,n,key);
}
