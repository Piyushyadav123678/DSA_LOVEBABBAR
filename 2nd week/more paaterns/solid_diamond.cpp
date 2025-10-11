#include<iostream>
using namespace std;

//    *
//   ***
//  *****
// *******
//----------
// *******
//  *****
//   *** 
//    *


// basically kuch nhi hai do parts mein divide karo upar full pyramid hai niche inverted full pyramid hai
int main(){

    int no_of_rows;
    cout<<"no. of rows ";
    cin>> no_of_rows;

    // upper half part
    for(int row=0;row<no_of_rows;row++){
        // spaces
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        // stars
        for(int col=0;col<2*row+1;col++){
            cout<<"*";
        }
     cout<<endl;;   
    }

    //lower half
    for(int row=0;row<no_of_rows;row++){

        // spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }

        // stars
        for(int col=0;col<2*(no_of_rows-row-1)+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
