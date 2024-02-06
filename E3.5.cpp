/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

This program reads three numbers and prints increasing if they are in increasing order, 
decreasing if they are in decreasing order, and neither otherwise. 
Here, increasing means strictly increasing, with each value larger than its predecessor.
 The sequence 3 4 4 would not be considered increasing.
*/

#include <iostream>
using namespace std;

int main(){
    int one;
    int two;
    int three;

    cout << "Enter the first number: ";
    cin >> one;
    cout << "Enter the second number: ";
    cin >> two;
    cout << "Enter the third number: ";
    cin >> three;

    if(three > two && two > one){
        cout << "increasing";
    } else if(three < two && two < one){
        cout << "decreasing";
    } else {
        cout << "neither";
    }
    return 0;
}