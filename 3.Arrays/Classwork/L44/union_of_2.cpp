#include<iostream>
#include<vector>
#include<limits.h>
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
            if(arr[i] == brr[j]){
                
                brr[j] = INT_MIN;        // ✅ duplicate handled here
                break;
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }

    for(int j=0;j<brr.size();j++){
        if(brr[j]!=INT_MIN){
            ans.push_back(brr[j]);
        }
    }

    cout<<"The union of the arr and brr is"<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" , " ;
    }
    return 0;
}