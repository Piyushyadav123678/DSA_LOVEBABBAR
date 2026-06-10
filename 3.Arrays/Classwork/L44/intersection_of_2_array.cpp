// #include<iostream>
// #include<vector>
// using std::cout;
// using std::cin;
// using std::endl;
// using std::vector;

// bool check(vector<int> &arr,int n,vector<int> &ans){
//     for(int i=0;i<ans.size();i++){
//         if(ans[i]==arr[n]){
//             return false;
//         }
       
        
//     }
//     return true;
// }

// int main(){

//     cout<<"Enter the no . element of the first array"<<endl;
//     int n1;
//     cin>>n1;
//     cout<<"Enter the  element of the first array"<<endl;
//     vector<int>arr;
//     for(int i=0;i<n1;i++){
//         int n;
//         cin>>n;
//         arr.push_back(n);
//     }

//     cout<<"Enter the no . element of the second array"<<endl;
//     int n2;
//     cin>>n2;
//     cout<<"Enter the  element of the second array"<<endl;
//     vector<int>brr;
//     for(int i=0;i<n2;i++){
//         int n;
//         cin>>n;
//         brr.push_back(n);
//     }

//     vector<int>ans;
//     for(int i=0;i<arr.size();i++){
//         if(check(arr,i,ans)){
//            for(int j=0;j<brr.size();j++){
//                 if(arr[i]==brr[j]){
//                     ans.push_back(arr[i]);
//                     break;
//                 }
//             } 
//         }
       
//     }
//     cout<<"The intersection of arr and brr is"<<endl;

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }

//     return 0;
// }

// mentos jindagi
#include<iostream>
#include<vector>
#include<climits>
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
                for(int y=0;y<ans.size();y++){
                    if(arr[i]==ans[y]){
                        ans.push_back(ans[y]);
                    }
                }
                ans.push_back(arr[i]);   // ✅ same as before
                brr[j] = INT_MIN;        // ✅ duplicate handled here
                break;
            }
        }
    }

    cout<<"The intersection of arr and brr is"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
