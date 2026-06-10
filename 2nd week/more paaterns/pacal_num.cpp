#include<iostream>
using namespace std;

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

int factorial(int num){
    int start =1;
    for(int i=1;i<=num;i++){                               
        start=start*i;
    }
    return start;
}
int main(){

    cout<<"Enter the no. of row : ";
    int n;
    cin>> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(factorial(i))/((factorial(j))*factorial(i-j));
        }
        cout<<endl;
    }
    return 0;
}