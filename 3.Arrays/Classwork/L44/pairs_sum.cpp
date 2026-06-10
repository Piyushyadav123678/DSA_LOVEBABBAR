#include<iostream>
#include<vector>
using namespace std;

int main(){

    cout<<"Enter the no. of elements of the first array"<<endl;
    int n1;
    cin>>n1;

    cout<<"Enter the elements of the first array"<<endl;
    vector<int> arr;
    for(int i=0;i<n1;i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }

    cout<<"Enter the no. of elements of the second array"<<endl;
    int n2;
    cin>>n2;

    cout<<"Enter the elements of the second array"<<endl;
    vector<int> brr;
    for(int i=0;i<n2;i++){
        int n;
        cin>>n;
        brr.push_back(n);
    }

    vector<int> ans;

     for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            cout<<"("<<arr[i]<<brr[j];
        }
     }
    return 0;
}