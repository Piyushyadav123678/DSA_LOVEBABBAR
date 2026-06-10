#include<cmath>
#include<iostream>
using namespace std;

int reverse(int n){

    int m;
    int j=0;
   // m=sizeof(n)/sizeof(int);  ye glt hai bhai becuase n ka size bhi 4 byte hai or int, ka bhi

   for(int i=0;i<n;i++){
    if(n/(int)pow(10,i)==0){
        m=i;
        break;
    }
   }

   for(int i=0;i<m;i++){
    j=j+(n%10)*(pow(10,m-1-i));
    n=n/10;
   }

    return j;


}

int main(){

    cout<<"Enter the integer : ";
    int n;
    cin>>n;

   

    cout<<"Your reversed integer is : "<< reverse(n);

    return 0;
}


// #include <iostream>
// #include <climits>   // for INT_MAX, INT_MIN
// using namespace std;

// // Returns reversed integer if it fits in int, otherwise returns 0 and prints overflow warning.
// // You can change behavior as needed (throw, return long long, etc.)
// int reverseInt(int x) {
//     long long rev = 0;           // use long long temporarily to detect overflow
//     int sign = (x < 0) ? -1 : 1;
//     long long n = llabs((long long)x);

//     while (n > 0) {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n /= 10;
//         // check overflow for 32-bit int
//         if (rev > INT_MAX) {
//             cerr << "Overflow: reversed value does not fit in int.\n";
//             return 0; // or handle differently
//         }
//     }

//     rev *= sign;
//     return (int)rev;
// }

// int main() {
//     cout << "Enter the integer : ";
//     int n;
//     if (!(cin >> n)) {
//         cerr << "Invalid input\n";
//         return 1;
//     }

//     int rev = reverseInt(n);
//     cout << "Your reversed integer is : " << rev << '\n';
//     return 0;
// }


// yeh gpt ne optimize krke diya hai must hai number of digit ki jarurat hi nhi padi