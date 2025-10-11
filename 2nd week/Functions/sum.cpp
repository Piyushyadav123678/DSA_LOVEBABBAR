#include<iostream>
using namespace std;

         // or yeh saath mein bata rhe hai ki jo value aa rhi hai vo integer value hai aap float bhi likh skte the vo unko 
         // automatically float mein convert krr deta or return ke time unko integer bana deta
         // because humne kaha hai ki humari return type integer hai
         // these aree paremeter




// declaration + definition
int add (int a,int b){  
      // here the new a and b will create different from the main function a and b but eith the same value as we have passed the value when calling it
// int add(int x, int y)   naam alg krr ke bhi use krr skte hai bcz create to naya hi hona bss value pass kri hai humne to 
    int result=a+b;
    return result;
}


int sum(int x, int y);

 int main(){
    int a;
    cout<<"print the value of a ";
    cin>> a;
     cout<<"print the value of b ";
    int b;
    cin>>b;
     
    int sumResult=add(a,b);   // callinmg the function and giving the imput  pass by value

    int same=sum(a,b);

    // humne yeh function call kiya hai iski declaration humare current function se upar honi chahiye agar niche hue to error aa jaayega 
    // bcz compiler ko pata nhi chalega kaha function as vo line by line aa raha hai    
    cout<<"the value of sum is ";
    cout<< sumResult ;
    return 0;
 }

 int sum(int x, int y){
    int result = x+y;
    return result;
 }