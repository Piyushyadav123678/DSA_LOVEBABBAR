#include<iostream>
using namespace std;


//     1|
//    12|1
//   123|21
//  1234|321
// 12345|4321


//1
//12
//123
//1234
//12345   
// spaces lagane ke baad agr simply isko bhi print krr de to yeh ese hi chalega

int main(){

    int no_of_rows;
    cout<<"no. of rows";
    cin>> no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        //spaces
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        // for left side
        int start=1;
        for(int col=0;col<row+1;col++){
            // cout<<col+1;
            cout<<start;
            start++;
        }
        // for right side
        int star=row;
        for(int col=0;col<row;col++){
            cout<<star;
            star--;
        }
        cout<<endl;
    }
    return 0;
}