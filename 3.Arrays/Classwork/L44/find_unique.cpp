#include<iostream>
using namespace std;

int main(){

    // ip:- {1,2,4,2,1,3,6,5,5,6,4}
    // CONCEPT:-
        // X^X=0  // ^ is XOR  which is like 0^0=0  1^1=0   0^1=1
        // X^0=X
    int s=0;
    int arr[]={1,2,4,2,1,3,6,5,5,6,4};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        s=s^arr[i];
    }

    cout<<"The unique element in array : "<<s;

    return 0;
}