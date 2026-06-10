#include<iostream>
#include<vector>
using namespace std;

void MovedArray(vector<int> &arr){
    int i=0;
    int end=arr.size()-1;
    

    while(i<=end){
       if(arr[i]<0){
        swap(arr[i],arr[end]);
        end--;
       }
       if(arr[i]>=0){
        i++;
       }
    }

    cout<<"The sorted array is";

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        }

    
}

int main(){

    vector<int>arr;

    int n;
    cout<<"Enter the no. of elements ";
    cin>>n;

    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        }
    
    MovedArray(arr);
    
    return 0;
}