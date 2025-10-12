#include<iostream>
#include<cmath>
using namespace std;

int mult(int m,int i){
    return m * pow(10, i);   // idhr ** yeh pointer ke liye use hita hai or ^ yeh waala alg operator hai
}

void print(int n){
    int start =0;
    for (int i=0;i<n;i++){
        cout<< "enter the "<< i+1 <<" digit ";
        int m;

        cin>>m;
        start=start+mult(m,i);

        }
    cout<<start;
}



int main(){

    cout<<"enter the no. of digit of the number : ";
    int n;
    cin>> n;
    print(n);
    return 0;
}