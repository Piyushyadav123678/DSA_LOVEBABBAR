#include<iostream>
using namespace std;

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 0123456
//---------
// 4*4*4*4
// 3*3*3
// 2*2
// 1

int main(){

    int no_of_rows;
    cout<<"no. of rows ";
    cin>> no_of_rows;

    // upper half
    for(int row=0;row<no_of_rows;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //lower half
    for(int row=0;row<no_of_rows;row++){
        for(int col=0;col<2*no_of_rows -2*row-1;col++){
            if( col%2==0){
                cout<<no_of_rows-row;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}