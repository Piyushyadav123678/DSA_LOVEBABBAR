#include<iostream>
using namespace std;

// 12345
// 1234
// 123 
// 12 
// 1

int main(){
    
    int no_of_rows;
    cout<<"enter no. of rows ";
    cin>> no_of_rows;
    
    for (int row=0;row<no_of_rows;row++){
        int start =1;
        for(int col=0;col<no_of_rows-row;col++){
            // cout<<start ;
            // start++;
            cout<<col+1;
            
        }
        cout<<endl;
    }
    
    
    return 0;
}