#include<iostream>
using namespace std;

string Grade( int marks ){   //Use double quotes "A" for string type, or single quotes 'A' only if returning a single char
                           // If you have to put char grade you use 'A' not "A" also we are returning "A*" this is not char this is string

     switch(marks/10){
        case 10 : return "A*";
        break ;
        case 9 : return "A";
        break;
        case 8 : return "B";
        break;
        case 7 : return "C";
        break;
        case 6 : return "D";
        break;
        case 5 : return "E";
        break;
        default : return "F";
        }
}

int main(){

    cout<<"Enter your marks : ";
    int marks;
    cin>>marks;

    
    if(marks<=100 && marks >=0){

        cout<<"Your grade is : ";

        cout<< Grade(marks);
    }
    else {
        cout<<"You entered wrong marks";
    }

    
    return 0;
}