#include<iostream>
#include<vector>
using namespace std;

// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
// Example 1:
// Input: nums = [3,0,1]
//Output: 2

int missingNumber(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+i+1;
            sum1=sum1+nums[i];
        }

        return sum-sum1;
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

    cout<<"The missing element is :"<<missingNumber(arr);



    return 1;
}