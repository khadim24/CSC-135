/*
Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.

Example
$ ./east-storage
Enter date: 05/20/2018
East basin storage: 80.96 billion gallons
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;
#include <string>

int main(){
    string inp;
    ifstream fin("Current_Reservoir_Levels.tsv");
    cout << "Enter a string, in MM/DD/YYYY";
    cin >> inp; 
}
