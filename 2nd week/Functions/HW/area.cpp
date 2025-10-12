#include<iostream>
using namespace std;

float area(float radius);

int main(){

    cout<<"Enter the radius of the circle : ";
    float radius;
    cin>> radius;

    cout<<"the area of the circle is "<<area(radius);
    return 0;
}

float area(float radius){
    return 3.14*radius*radius;
}