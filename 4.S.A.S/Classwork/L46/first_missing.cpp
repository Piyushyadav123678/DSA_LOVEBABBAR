#include<iostream>
#include<vector>
using namespace std;




// a = 1 2 3 4 6 7 8 
//     0 1 2 3 4 5 6 
int Missing(vector<int> &arr){
     int s=0;
     int end=arr.size()-1;
     int mid=s+(end-s)/2;
     int ans=-1;
    while(s<=end){
        if(arr[mid]==mid+1){    // Right Search
            ans=mid+1;   
            s=mid+1;
        }

        else if(arr[mid]==mid+2){
            end=mid-1;
        }

        mid=s+(end-s)/2;
     }
     return ans+1;
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

    // int target;
    // cout<<"Enter the tearget element";
    // cin>>target;

    cout<<"The Misiing element is"<<" is "<<Missing(arr);

    return 0;
}