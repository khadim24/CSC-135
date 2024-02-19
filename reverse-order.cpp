/*Write a program reverse-order.cpp which asks the user to input two dates (earlier date then later date). 
The program should report the West basin elevation for all days in the interval in the reverse chronological order 
(from the later date to the earlier).
*/
// Lab 3 Task D
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

    string date, line, edate, ldate;
    double eastSt, eastEl, westSt, westEl;
    cout << "Enter earlier date: ";
    cin >> edate;
    cout << "Enter later date: ";
    cin >> ldate;

    // Ignore the header line
    getline(fin, line);

    const int SIZE = 365;
    double reverse[SIZE]; // Store West basin elevations
    string dates[SIZE];

    int index = 0;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        if (date >= edate && date <= ldate) { 
            dates[index] = date;
            reverse[index] = westEl; 
            index++; 
        }
    }

    // Output in reverse chronological order
    for (int i = index - 1; i >= 0; i--){
        cout << dates[i] << " " << reverse[i] << endl;
    } 

    fin.close();
    return 0;
}
