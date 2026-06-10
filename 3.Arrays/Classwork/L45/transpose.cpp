#include<iostream>
#include<limits.h>
using namespace std;

// void Max(int arr[3][3], int rows){
//     int x = INT_MIN;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j] > x){
//                 x = arr[i][j];
//             }
//         }
//     }

//     cout<<"The max element is : "<<x<<endl;
// }

// void Min(int arr[3][3], int rows){
//     int x = INT_MAX;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j] < x){
//                 x = arr[i][j];
//             }
//         }
//     }

//     cout<<"The min element is : "<<x<<endl;
// }

void Transpose(int arr[][3],int rows,int cols){
    int transpose[3][3];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[i][j]=arr[j][i];
        }
    }

    cout<<"The transposed matrix is :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int arr[3][3];

    for(int i=0;i<3;i++){
        cout<<"Enter the elements of "<< i <<" row of the matrix ";
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Min(arr,3);
    // Max(arr,3);

    Transpose(arr,3,3);
    return 0;
}