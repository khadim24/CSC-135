/*Write a program that reads a word and prints each character of the word on a separate line. 
For example, if the user provides the input "Harry", the program prints
H
a
r
r
y
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
string input;
int i; 
int length;
cout << "Enter a string: ";
cin >> input;
length = input.length();
for(i = 0; i < length; i++){
cout << input[i] << "\n";
}
return 0;
}