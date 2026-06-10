#include<iostream>
#include<vector>
using namespace std;

void Negative2Left(vector<int> arr,int size){   //void Negative2Left(vector<int> &arr,int size)  // if you want as pass by refrence
    int s=0;                                    // isme arr.size() chal jaayega bcz isme object ka refrence aaata hai not only pointer    

    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[s],arr[i]);
            s++;
        }
    }

    cout<<"The new array is";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

}

int main(){

    cout<<"Enter the no. of integers in your array ";

    int n;
    cin>>n;

    vector<int>arr;

    cout<<"Enter the elemnts of the array";

    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        arr.push_back(x);
    }


    // cout<<arr.size()<<endl;
    // cout<<arr.capacity();
    //  Negative2Left(arr.data(),arr.size()); // if you want to take the call in function as int arr[] 

    // this is nothing but pass by refrence .data will share pointer  // phir arr.size waala fn nhi chalega bcz
    // yeh sirf pointer deta gai not vector object refrence

    Negative2Left(arr,arr.size()); // pass by value hai
    cout<<"The new array is";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}