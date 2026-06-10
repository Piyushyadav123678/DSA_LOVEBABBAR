#include<iostream>
using namespace std;

// void RowWiseSum(int arr[3][3]){
//     for(int i=0;i<3;i++){
//         cout<<"The SUM of "<< i <<" row of the matrix ";
//         int s=0;
//         for(int j=0;j<3;j++){
//             int x;
//             s=s+arr[i][j];
//         }

//         cout<<s;
//     }
// }

void ColumnsWiseSum(int arr[][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        cout<<"The SUM of "<< i <<" column of the matrix ";
        int s=0;
        for(int j=0;j<3;j++){
            int x;
            s=s+arr[j][i];
        }

        cout<<s;
    }
}

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
        cout<<"The elements of "<< i <<" row of the matrix "<< endl;
        for(int j=0;j<3;j++){
            
            cout<<arr[i][j];
        }
    }

    // RowWiseSum(arr);

    ColumnsWiseSum(arr,3,3);

    
    return 0;
}