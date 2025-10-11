#include<iostream>
using namespace std;

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
int main(){
    int no_of_rows;
    cout<<"no.of rows ";
    cin>> no_of_rows;

    for(int row=0;row<no_of_rows;row++){
        // spaces
        for(int col=0;col<no_of_rows-row-1;col++){
            cout<<" ";
        }
        // pyramid
        int start=1;
        for(int col=0;col<2*row+1;col++){
            if(row ==0 || row == no_of_rows-1){
                if(col%2==0){
                    cout<<start;
                    start++;
                }
                else {
                    cout<<" ";
                }
            }
            else{
                if (col==0){
                    cout<<start;
                }
                else if(col==2*row){
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}