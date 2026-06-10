#include<iostream>
using namespace std;
#include<vector>

void MajorityElement(vector<int> &arr){

    cout<<"The current array is : ";

    for(int i=0;i<arr.size();i++){

        cout<<arr[i]<<" , ";
    }
    cout<<endl;

    // for(int i=0;i<arr.size();i++){
    //     int count=0;
    //    for(int j=0;j<arr.size();j++){
    //     if(arr[i]==arr[j]){
    //         count++;
    //     }
    //    }
    //    if(count>arr.size()/2){
    //     cout<<"The Majority element is : "<<arr[i];
    //     break;
    //    }
    // }

    int count=0;
    int candidate=-1;

    for(int i=0;i<arr.size();i++){
        if(count==0){
            candidate=arr[i];
            count++;
        }

        if(candidate==arr[i]){
            count++; 
        }

        if(candidate!=arr[i]){
            count--;
        }
    }

    cout<<candidate;
    count=0;
    for(int i=0;i<arr.size();i++){
        if (arr[i]==candidate){
        count++;}
    }

    cout<< count;

    if(count>arr.size()/2){
        cout<<" the majority element is "<< candidate;
    }

    else{
        cout<<" not found ";
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

   

    MajorityElement(arr);




    return 0;
}