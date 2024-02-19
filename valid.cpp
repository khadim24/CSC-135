/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task A

This program "valid.cpp" asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Enter an Integer: ";
    cin >> input;

    while(input <= 0 || input >= 100){
        cout << "Enter another Integer: ";
        cin >> input;
    }
input *= input;
cout << input;
return 0;

}