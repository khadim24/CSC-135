/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program finds the smaller of the three integers
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
    if(one < two && one < three){
        cout << "The smaller of the three is " << one;
    }
    if(two < one && two < three){
        cout << "The smaller of the three is " << two;
    }
    if(three < one && three < two){
        cout << "The smaller of the three is " << three;
    }
    return 0;
}
//done
