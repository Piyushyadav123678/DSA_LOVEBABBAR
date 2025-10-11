#include<iostream>
using namespace std;

int main(){


    //    *
    //   * *
    //  *   *
    // *******

    int no_of_rows;
    cout<<" no. of rows ";
    cin>> no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        // spaces
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        //stars and spaces
        for(int col=0;col<2*row+1;col++){
            if(row==no_of_rows-1){
                cout<<"*";
            }
            else{ if(col==0|| col == 2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }}
           
        }
        cout<<endl;
    }
    return 0;
}