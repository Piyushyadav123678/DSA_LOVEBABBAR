#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int Target(vector<int> &arr,int target){
//     int s=0;
//     int end=arr.size()-1;
//     int mid=s+(end-2)/2;

//     while(s<=end){
//         if(arr[mid]==target){
//             return mid +1;
//         }

//         else if(arr[mid]<target){    //right search
//             s=mid+1;
//         }

//         else if(arr[mid]>target){    //left search
//             end=mid-1;
//         }

//       mid=s+(end-s)/2;
//     }

//     return -1;
// }

int SQRT(vector<int> &arr,int target){
    int s=0;
    int end=arr.size()-1;
    int mid=s+(end-2)/2;
    int ans=-1;

    while(s<=end){
        if(arr[mid]*arr[mid]==target){
            return arr[mid];
        }

        if(arr[mid]*arr[mid]<target){  // Right Search
            ans=arr[mid];
            s=mid+1;
        }

        if(arr[mid]*arr[mid]>target){
            end=mid-1;
        }

        mid=s+(end-s)/2;
    }

    return ans;

}

int main(){

    // int n;
    // cout<<"Enter the no. of element in the array : "<<endl;
    // cin>>n;

    
    // cout<<"Enter the element of the array "<<endl;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);
    // }

    int target;
    cout<<"Enter the tearget element "<<endl;
    cin>>target;

    vector<int> arr(target);

    iota(arr.begin(),arr.end(),1);

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i];
    // }


    cout<<"The sqrt of the "<<target<<" is "<<SQRT(arr,target);

    return 0;
}