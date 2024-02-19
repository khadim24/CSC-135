/*
Author: Khadim Thiam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task D

This program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from 0 to 59
*/

#include <iostream>
using namespace std;
int main(){
int i; 
int fib[60];
fib[0] = 0;
fib[1] = 1;
cout << fib[0] << "\n";
cout << fib[1] << "\n"; //printing the first two elements
for(i = 2; i < 60; i++){
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i];
    cout << "\n";
}
 return 0;
} 
