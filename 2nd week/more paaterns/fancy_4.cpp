#include<iostream>
using namespace std;

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 0123456
//-----------
// 7*8*9*10
// 4*5*6
// 2*3
// 1
int main(){

    cout<<"Enter the no. of row : ";
    int n;
    cin>>n;

    //upper half
    int start =1;
    for(int i=0;i<n;i++){
       for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<start;
                start++;
            }
            else{
                cout<<"*";
            }
       }
        cout<<endl;
    }

    return 0;
}