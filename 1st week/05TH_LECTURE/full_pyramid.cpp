#include<iostream>
using namespace std;


//    *
//   ***
//  *****
// *******  

int main() {
    int no_of_rows;
    cout << "enter no. of rows ";
    cin >> no_of_rows;

    for (int row = 0; row < no_of_rows; row++) {

        // spaces
        for (int col = 0; col < no_of_rows - row - 1; col++) {
            cout << " ";
        }

        // stars
        for (int col = 0; col < 2 * row + 1; col++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}