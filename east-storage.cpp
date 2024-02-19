// Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.
// Lab 3 Task A
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string date, line, targetD;
    double eastSt, eastEl, westSt, westEl;

    cout << "Enter the date in MM/DD/YYYY format: ";
    cin >> targetD;

    bool found = false; //keeps track if the data is found

    // Ignore the header line
    getline(fin, line); //

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        // Check if the date matches
        if (date == targetD) {
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Data for the entered date not found." << endl;
    } //printd if data is not found for that date

    fin.close();
    //close reading the file
    return 0;
}
