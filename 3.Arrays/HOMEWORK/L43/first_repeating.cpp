// Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
// Output: 2
// Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.

#include<iostream>
#include<vector>
using namespace std;

int firstRepeated(vector<int> &arr, int n) {
    // code here
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i+1;
            }
        }
    }
    return -1;
}

int main(){

    
    return 0;
}