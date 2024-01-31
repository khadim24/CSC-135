
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
    int month;
    int year1;

    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month";
    cin >> month;

    // Check if it's a leap year or not
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        year = year1;
    }
    if(month = 1){
        cout << "31 days";
    }
    if(month = 2 && year != year1){
        cout << "28 days";
    }
    if(month = 2 && year == year1){
        cout << "29 days";
    }
    if(month = 3){
        cout << "31 days";
    }
    if(month = 4){
        cout << "30 days";
    }
    if(month = 5){
        cout << "31 days";
    }
    if(month = 6){
        cout << "30 days";
    }
    if(month = 7){
        cout << "31 days";
    }
    if(month = 8){
        cout << "31 days";
    }
    if(month = 9){
        cout << "30 days";
    }
    if(month = 10){
        cout << "31 days";
    }
    if(month = 11){
        cout << "30 days";
    }
    if(month = 12){
        cout << "31 days";
    }

    return 0;
}