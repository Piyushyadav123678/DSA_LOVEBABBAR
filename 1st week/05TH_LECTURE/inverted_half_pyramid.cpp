#include<iostream>
using namespace std;

// ****
// ***
// **
// *

int main(){

    cout<<"no. of rows ";
    int no_of_rows;
    cin>>no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        for (int col=0;col<no_of_rows-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }


    


    return 0;
}