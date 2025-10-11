#include<iostream>
using namespace std;

void counting( int num){    // here num is parameter
    for(int i=1;i<=num;i++){  
        cout << i<<endl;
    }
}

int main(){

    cout<<" enter the value on n : ";
    int num;

    cin>> num;

    counting(num); // here num is argument
    return 0;
}