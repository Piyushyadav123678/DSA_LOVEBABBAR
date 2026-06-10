#include<iostream>
#include<vector>
using namespace std;

void SpiralPrint(vector<vector<int> > &arr){
    
}

int main(){

    vector<vector<int> > arr;
    vector<int>brr;

    int rows;
    int cols;

    cout<<"Enter the no. of rows ";
    cin>>rows;

    cout<<"Enter the no. of cols";
    cin>>cols;

    for(int i=0;i<rows;i++){
        cout<<"Enter the elements of "<< i << " row ";
        for(int j=0;j<cols;j++){
            int x;
            cin>>x;
            
            brr.push_back(x);
        }
        arr.push_back(brr);
        brr.clear();
    }

    cout<<"The Existence matrix is : "<<endl;
    for(int i=0;i<rows;i++){
        cout<<endl;
        for(int j=0;j<cols;j++){
            cout<<" "<<arr[i][j];
        }
    }

    SpiralPrint(arr);
    return 0;
}