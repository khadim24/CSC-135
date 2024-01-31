
/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program check if a year is a leap year
*/
#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap year.";
    } else {
        cout << year << " is a Common year.";
    }

    return 0;
}