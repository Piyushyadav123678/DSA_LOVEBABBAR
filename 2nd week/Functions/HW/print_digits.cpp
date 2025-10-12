#include<iostream>
using namespace std;

void print(int num){
    int n=num;
    for(int i=0;i<n;i++){   // agar isko direct num likh deta to num/10 mein dikkat aa jaati vo dry run krke smjh jaaoge
        cout<<num%10 << " , ";
       
        if(num/10==0){
            break;
        }
        num=num/10;    
    }
}

int main(){

    cout<<"Enter the integer : ";
    int num;
    cin>> num ;
    cout<<"The digit of the integer "<< num << " is : ";
    print(num);
    return 0;
}