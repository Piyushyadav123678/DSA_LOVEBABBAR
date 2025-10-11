#include<iostream>
using namespace std;

int Sum(int num);

int main(){

    cout<<" Enter the value of the N : ";
    int n;
    cin>>n;

    cout<<"The sum of the number till "<<n<< " is : "<< Sum(n);
    return 0;
}

int Sum(int num){
    int start =0;
    for (int i=1; i<=num; i++){
        start=start+i;
    }
    return start;   // return statement mein loop nhi daal skte usme single line expression hi jaa skta hai syntax mein dkkat aa jaati hai
}