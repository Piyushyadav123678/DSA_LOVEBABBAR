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

int min(int arr[],int n){
    int element=arr[0];


    for(int i=0;i<n;i++){
        if(arr[i]<element){
            element=arr[i];
        }
    }
    return element;
}


int main(){

    cout<<"Enter the size of your array ";
    int n;
    cin>>n;

    cout<<"Enter the elements of array";
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The nextreme element in array is "<<max(arr,n)<<"and "<<min(arr,n);
    return 0;
}