//Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2018.
// Lab 3 Task B
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

    string date, line; // calls the strings/
    double eastSt, eastEl, westSt, westEl; //calls the double in the files
    double mins = 9999999999999.0;
    double maxy = -9999999999999.0;

    // Ignore the header line
    getline(fin, line); //
    //reads the file
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
           if(eastSt > maxy){
            maxy = eastSt;
           }
           if(eastSt < mins){
            mins = eastSt;
           }
           }
           
        cout << "minimum storage in East basin: " << mins << " billion gallons" << endl;
        cout << "MAXimum storage in East basin: " << maxy << " billion gallons" << endl;
    
    fin.close(); //closes opening the file
    return 0;
}