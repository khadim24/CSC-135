/*Write a program compare.cpp that asks the user to input two dates 
(the beginning and the end of the interval). 
The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/
// Lab 3 Task C
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string date, line, date1, date2; // calls the strings/
    double eastSt, eastEl, westSt, westEl; //calls the double in the files
    cout << "Enter a date: ";
    cin >> date1;
    cout << "Enter another date: ";
    cin >> date2;

    // Ignore the header line
    getline(fin, line);
    //reads the file
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
           if(date >= date1 && date <= date2){
            if(eastEl < westEl){
                cout << date << " West" << endl;
            } //checks if east is smaller
            if(eastEl == westEl){
                cout << date << " Equal" << endl;
            } //checks if east and west is equal
            if(eastEl > westEl){    
                cout << date << " East" << endl;
            } //checks if east is bigger
            }
            getline(fin, line);
           }
           
       
    
    fin.close(); //closes opening the file
    return 0;
}