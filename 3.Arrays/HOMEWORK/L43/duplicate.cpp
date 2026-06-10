#include<iostream>
#include<vector>
using namespace std;

// given array of n+! size and all the number from 1 to n and 1 is repeating find that one

int Modulus(int n){
    if(n>=0){
        return n;
    }
    else{
        return -n;
    } 

    return -1;
}

int Duplicate(vector<int> &arr){
    //  int sum=0;
    //     int sum1=0;
    //     for(int i=0;i<nums.size();i++){
    //         sum=sum+i+1;
    //         sum1=sum1+nums[i];
    //     }

    //     return sum-sum1;
    for(int i=0;i<arr.size();i++){
        int x=Modulus(arr[i]);
        arr[x-1]=-arr[x-1];
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            return i+1;
        }
    }

    return -1;
}

int main(){

    cout<<"Enter the no. of element ";
    int n;
    cin>>n;

    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"The duplicate element is :"<<Duplicate(arr);


    return 1;
}