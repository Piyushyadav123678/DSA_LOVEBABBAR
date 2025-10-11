#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
//-------
// ****
// ***
// **
// *

int main(){

    int no_of_rows;
    cout<<"Enter no. of rows ";
    cin>>no_of_rows;

    // upper part
    for(int row=0;row<no_of_rows;row++){
        for(int col=0; col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for lower part
    for(int row=0; row<no_of_rows-1;row++){
        for(int col=0;col<no_of_rows - row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}