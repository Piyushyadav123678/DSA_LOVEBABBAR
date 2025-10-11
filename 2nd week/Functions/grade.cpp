#include<iostream>
using namespace std;


char grade( int marks){   // Char likhoge to bole no data type Char defined becayse char hai defined to mtlb ki case senstive hai
   
    if(marks>90){ return 'A'; }
    else if(marks>80 && marks<90){ return 'B';}
    else if(marks>70 && marks<80){ return 'C';}
    else if(marks>60 && marks<70){ return 'D';}
    else if(marks>50 && marks<60){ return 'E';}
    else if(marks<50){ return 'F';}

    // Default case if none of the above conditions are met
    return 'F';
}

int main(){

    cout<<" enter the marks of the  student : ";
    int marks;
    cin>>marks;

    char Grade = grade( marks);  // G use nhi krr skta variable and function naam same nhi lalal

    cout<<"the grade of the student is "<< ": "<< Grade;


    return 0;
}