#include<iostream>
using namespace std;

int maximum(int a,int b,int c){

    if(a>b && a>c){
        return a;
    }

    else if(b>a && b>c){
        return b;
    }

    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"enter the value of three numbers : ";

    cin>>a>>b>>c;

    int max=maximum(a,b,c);

    cout<<" the maximum of three is :"<< max;

    return 0;
}