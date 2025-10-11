#include<iostream>
using namespace std;

int main(){

    int no_of_rows;
    cout << "enter no. of rows:";
    cin >> no_of_rows;

    int no_of_columns;
    cout << "enter no. of columns:";
    cin >> no_of_columns;
    


    for (int i=0;i<no_of_rows;i++){
        if(i==0 || i==no_of_rows-1){
             for (int j=0;j<no_of_columns;j++){
            cout<<"*";
        }
        }    else{
                for(int z=0;z<no_of_columns;z++){
                    if(z==0 || z==no_of_columns-1){
                        cout<< "*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
        
        cout<<endl;  
    }
    return 0;
}