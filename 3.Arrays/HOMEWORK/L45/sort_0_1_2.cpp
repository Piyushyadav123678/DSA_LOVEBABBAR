#include<iostream>
#include<vector>
using namespace std;

void SortedColors(vector<int> &arr,int n){
    int i=0;
    int s=0;
    int end=arr.size()-1;
    

    while(i<=end){
        if(arr[i]==0){
            swap(arr[s],arr[i]);
            s++;
            i++;
        }
        else if(arr[i]==1){
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[end]);
            end--;
        }
    }

    cout<<"The sorted array is";

    for(int i=0;i<n;i++){
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
    
    SortedColors(arr,n);
    
    return 0;
}