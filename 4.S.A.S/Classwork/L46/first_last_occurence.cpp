#include<iostream>
#include<vector>
using namespace std;

// int Target(vector<int> &arr,int target){
//     int s=0;
//     int end=arr.size()-1;
//     int mid=s+(end-2)/2;

//     while(s<=end){
//         if(arr[mid]==target){
//             return mid;
//         }

//         else if(arr[mid]<target){    //right search
//             s=mid+1;
//         }

//         else if(arr[mid]>target){    //left search
//             end=mid-1;
//         }

      
//     }

//     return -1;
// }

int FirstOccurence(vector<int> &arr,int target){
    int s=0;
    int end=arr.size()-1;
    int mid=s+(end-s)/2;
    int ans=-1;

    while(s<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        mid=s+(end-s)/2;
    }
    return ans+1;
}

int LastOccurence(vector<int> &arr,int target){
    int s=0;
    int end=arr.size()-1;
    int mid=s+(end-s)/2;
    int ans=-1;

    while(s<=end){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
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

    int target;
    cout<<"Enter the tearget element "<<endl;
    cin>>target;

    cout<<"The first location of the "<<target<<" is "<<FirstOccurence(arr,target)<<endl;

    cout<<"The last location of the "<<target<<" is "<<LastOccurence(arr,target)<<endl;

    cout<<"The no. of time the element occur is "<< LastOccurence(arr,target) - FirstOccurence(arr,target)+1;

    return 0;
}