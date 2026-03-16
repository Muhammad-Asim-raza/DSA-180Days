#include <iostream>
#include <algorithm>
using namespace std;
//                  BINARY SEARCH
// 2: An array is given in decreasing order with Key, Find the index
//    of key, if key is not present, print -1;
int binary(int Arr[], int num, int key){
    int start=0;
    int end =num-1;
    int mid;
    while(start<=end){
        mid= start + (end-start)/2;
        if(Arr[mid]==key){
            return mid;
        }else if(Arr[mid]<key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return -1;
}
int main(){
     int Arr[1000];
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    cout<<"Enter the elements in decreasing order: ";
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<binary(Arr,n,key);
}

