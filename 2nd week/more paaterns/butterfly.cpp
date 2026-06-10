#include<iostream>
using namespace std;

// *      *
// **    **
// ***  ***
// ********
// ---------
// ********
// ***  ***
// **    **
// *      *

int main(){

    cout<<"Enter the no. of row : ";
    int n;
    cin>> n;
    // upper 
    // right part
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        // middle part
         for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        // upper right
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    //lower
    // left
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        // middle
         for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}