#include<iostream>
using namespace std;

int main(){

    int side;
    cout<<"enter the length of side";
    cin>>side;

    for(int row=0;row<side;row++){
        for(int col=0;col<side;col++){
            if(col==0|| col==side-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}