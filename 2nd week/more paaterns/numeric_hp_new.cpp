#include<iostream>
using namespace std;

// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

int main(){

    int no_of_rows;
    cout<<"no. of rows ";
    cin>>no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        int start =1;
        for(int col=0;col<row+1;col++){
            if(row== no_of_rows-1){
                cout<<start;
                cout<<" ";
                start ++;
            }
            else{
                if(col==0){
                    cout<<start;
                    cout<<" ";
                }
                else if(col==row){
                    cout<<col+1 ;
                    cout<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}