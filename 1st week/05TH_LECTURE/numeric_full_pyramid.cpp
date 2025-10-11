#include<iostream>
using namespace std;


//    1
//   1 2
//  1 2 3 
// 1 2 3 4 

int main(){

    int no_of_rows;
    cout<<"enter no. of rows ";
    cin>>no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        // spcaes
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        int start=1;
        for(int col=0;col<row+1;col++){
            cout<<start;
            cout<<" ";
            start++;
        }
    cout<<endl;
    }

    cout<<endl;
    cout<<endl;



//    1
//   123
//  12345
// 1234567

for(int row=0;row<no_of_rows;row++){
    //spaces
    for(int col=0;col<no_of_rows-row-1;col++){
        cout<<" ";
    }
    for(int col=0;col<2*row+1;col++){
        cout<<col+1;
    }
    cout<<endl;
}
    return 0;
}