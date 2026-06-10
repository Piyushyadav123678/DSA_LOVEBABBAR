#include <iostream>
using namespace std;

int count0(int arr[],int n){
    int count0=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
    }
    return count0;
}

int count1(int arr[],int n){
    int count1=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
    }
    return count1;
}

int main(){
    int n;
    cout<<"Enter the size if array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"no.of zeroes in arr is "<<count0(arr, n)<<" no. os 1's in arr is "<< count1(arr , n);

    return 0;
}