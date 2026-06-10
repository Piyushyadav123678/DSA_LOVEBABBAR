#include<iostream>
using namespace std;

int main(){

    // int x;
    // int y;

    // cout<<"Enter the no. of rows of matrix";
    // cin>>x;

    // cout<<"Enter the no. of cols of matrix";
    // cin>>y;
    int arr[3][3];

    for(int i=0;i<3;i++){
        cout<<"Enter the elements of "<< i <<" row of the matrix ";
        for(int j=0;j<3;j++){
            int x;
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<3;i++){
        cout<<"The elements of "<< i <<" row of the matrix ";
        for(int j=0;j<3;j++){
            int x;
            cout<<arr[i][j];
        }
    }
    return 0;
}