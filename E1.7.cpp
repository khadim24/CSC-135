/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7

This program prints three entered names on three separate lines.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string nameone;
    string nametwo;
    string namethree;
    cout << "Enter the first name: ";
    cin >> nameone;
    cout << "Enter the second name: ";
    cin >> nametwo;
    cout << "Enter the third name: ";
    cin >> namethree;
    cout << nameone <<endl << nametwo <<endl << namethree;
    return 0;

}