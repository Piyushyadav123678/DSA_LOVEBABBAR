#include<iostream>
using namespace std;

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****


int main(){

    int no_of_rows;
    cout<<"no. of rows ";
    cin>>no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        //left part
        for(int col=0;col<no_of_rows-row-1+4;col++){
            cout<<"*";
        }
        //middle part
        for(int col=0; col<2*row+1;col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }
        // right part
        for(int col=0;col<no_of_rows-row-1+4;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}