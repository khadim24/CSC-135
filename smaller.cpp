/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program finds the smaller of the two integers
*/
#include <iostream>
using namespace std;

int main(){
    int one;
    int two;
    cout << "Enter the first number: ";
    cin >> one;
    cout << "Enter the second number: ";
    cin >> two;
    if(one < two){
        cout << "The smaller of the two is " << one;
    }
    if(two < one){
        cout << "The smaller of the two is " << two;
    }
    return 0;
}
//done
