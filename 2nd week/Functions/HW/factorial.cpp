#include<iostream>
using namespace std;

int factorial(int num){
    int start =1;
    for(int i=1;i<=num;i++){  // mane idhr na i ki jagah num krr diya to num badhe jaa rha tha i prr effect nhi aa rha tha or code kyi
                              // der mein run hoke 1 output de rha tha as i to kabhi badha hi nhi 1 hi rha to multiply kya hi hoga
        start=start*i;
    }
    return start;
}

int main(){

    cout<<"enter the number : ";
    int num;
    cin>> num;

    cout<<"the factorial of the number is : "<< factorial(num);
    return 0;
}