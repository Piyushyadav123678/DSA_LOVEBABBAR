#include<iostream>
using namespace std;
#include<vector>

void LeftRotateBy1(vector<int> &arr){

    for(int i=0;i<arr.size()-1;i++){
        int s=i+1;
        swap(arr[i],arr[s]);
    }

}

int main(){

    cout<<"Enter the no. of element in the array :"<<endl;

    int n;
    cin>>n;
    cout<<"Enter the elemtents of the array :";

    vector<int> arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"The current array is : ";

    for(int i=0;i<n;i++){

        cout<<arr[i]<<" , ";
    }
    cout<<endl;

    LeftRotateBy1(arr);

    cout<<"The final array is : ";

    for(int i=0;i<n;i++){

        cout<<arr[i]<<" , ";
    }


    return 0;
}