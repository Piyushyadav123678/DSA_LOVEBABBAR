#include<iostream>
#include<vector>
using namespace std;

int Target(vector<int> &arr,int target){
    int s=0;
    int end=arr.size()-1;
    int mid=s+(end-2)/2;

    while(s<=end){
        if(arr[mid]==target){
            return mid +1;
        }

        else if(arr[mid]<target){    //right search
            s=mid+1;
        }

        else if(arr[mid]>target){    //left search
            end=mid-1;
        }

      mid=s+(end-s)/2;
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter the no. of element in the array : "<<endl;
    cin>>n;

    vector<int> arr;

    cout<<"Enter the element of the array "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int target;
    cout<<"Enter the tearget element";
    cin>>target;

    cout<<"The location of the "<<target<<" is "<<Target(arr,target);

    return 0;
}