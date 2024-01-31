
/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program check how many months is in a month
*/
#include <iostream>
using namespace std;

int main(){
    int year;
    int month;
    int days;

    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;

    // Check if it's a leap year or not
    if (month == 2) {
        // February has 28 or 29 days depending on whether it's a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // April, June, September, and November have 30 days
        days = 30;
    } else {
        // All other months have 31 days
        days = 31;
    }
    cout << days << " days";
    return 0;
}
