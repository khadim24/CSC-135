/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

This program reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;

int main(){
    int inte;
    cout << "Enter a number: ";
    cin >> inte;
    if(inte < 0){
    cout << "negative";
    } else if(inte = 0){
        cout << "zero";
    } else if(inte > 0){
        cout << "positive";
    }
return 0;

}