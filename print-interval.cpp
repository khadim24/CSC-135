/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task B

This program print-interval.cpp asks the user to input two integers L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>
using namespace std;

int main(){
    int lower;
    int upper;
    int i;
    cout << "Enter the Lower Limit: ";
    cin >> lower;
    cout << "Enter the Upper Limit: ";
    cin >> upper;

    for(i = lower; i < upper; i++){
        cout << i << " ";
    }
return 0;

}
