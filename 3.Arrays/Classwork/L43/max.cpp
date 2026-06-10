#include<iostream>
using namespace std;

int max(int arr[],int n){
    int element=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>element){
            element=arr[i];
        }
    }
    return element;
}


int main(){

    cout<<"Enter the size of your array ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The naximum element in array is "<<max(arr,n);
    return 0;
}