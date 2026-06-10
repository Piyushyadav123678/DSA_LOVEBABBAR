#include<iostream>
#include<vector>
using namespace std;

void SortedArray(vector<int> &arr){

    int size=arr.size();

    int s=0;
    int end=arr.size()-1;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            swap(arr[i],arr[s]);
            s++;
        }

        if(arr[i]==1){
            swap(arr[i],arr[end]);
            end--;
        }

        if(s>=end){
            break;
        }
    }
    cout<<"The sorted array is :";
    for(int i=0;i<arr.size();i++){

        cout<<arr[i];
    }
}

int main(){

    vector <int> arr;

    int n;
    cout<<"Enter the no. of element in the array"<<endl;

    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    SortedArray(arr);

    


    return 0;
}