#include<iostream>
using namespace std;


void print(int n){
    cout<<n<<", " ;
    }


void prime(int num){
    
    for(int i=3;i<=num;i++){
        int n=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                n++;
            }
        }
        if(n==0){
            print(i);
        }
    }
   
}
int main(){

    cout<<"enter the number : ";
    int num;
    cin>>num;
    cout<<"the prime number till "<< num<< " is : 2, "; // dekho cout mein kisi function tbhi call krr skte hai jbb kuch return krr rha ho agr void ka fucntion hai to aap call nhi krr dkte hai usko cout se
    prime(num);
    return 0;
}