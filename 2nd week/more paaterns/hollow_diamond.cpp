#include<iostream>
using namespace std;


//    *
//   * *
//  *   *
// *     *
//----------
//  *   *
//   * *
//    *

int main(){

    int no_of_rows;
    cout<<"no. of rows ";
    cin>> no_of_rows;
    // uppper half
    for(int row=0;row<no_of_rows;row++){
        // spaces
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        // stars
        for(int col=0; col<2*row+1;col++){
            if(col==0|| col==2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    // lower half
    for(int row=0;row<no_of_rows-1;row++){
        //spaces
        for(int col=0;col<row+1;col++){
            cout<<" ";
        }
        // stars
        for(int col=0;col<2*(no_of_rows-row-2)+1;col++){
            if(col==0||col==2*(no_of_rows-row-2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}