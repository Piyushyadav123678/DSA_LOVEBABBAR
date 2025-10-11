#include<iostream>
using namespace std;

string check(int num){
    if(num%2==0){
        return "even";
    }
    else {
        return "odd";
    }
}

int main(){

    cout<<"enter the number : ";
    int num;
    cin>>num;

    cout<<"the number is : "<< check(num);

    return 0;
}