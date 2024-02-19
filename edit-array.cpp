/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task C

This program creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>
using namespace std;

int main(){
const int size = 10;
int numbers[size];
int i;
int v;

for(i = 0; i < size; i++){
    numbers[i] = 1;
    }
// make array and fill it with 1
do {
    for(i = 0; i < size; i++){
    cout << numbers[i] << " ";
    } 
    cout << "\n";
    // print the array
    cout << "Enter an index: "; 
    cin >> i;
    cout << "Enter the new value of the index: ";
    cin >> v; 
    // get i and v from the user
    if(i >= 0 && i < size){
        numbers[i] = v;
    } 
    // if i is good, update the array at index i
}while (i >= 0 && i < size);
 return 0;
} // if the index was good, repeat
