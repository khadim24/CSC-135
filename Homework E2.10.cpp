/*
Write a program that asks the user to input

•The number of gallons of gas in the tank

•The fuel efficiency in miles per gallon

•The price of gas per gallon

Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/
#include <iostream>
using namespace std;

int main(){
    double gallons;
    double fueleff;
    double pricepergallon;
    double costpergallon;
    double distance;

    cout << "Enter the number of gallons in the tank";
    cin >> gallons;
    cout << "Enter the fuel in efficiency";
    cin >> fueleff;
    cout << "Enter the price of gas per galloon";
    cin >> pricepergallon;
    costpergallon = (100/fueleff) * pricepergallon;
    distance = gallons * fueleff;
    cout << costpergallon << " is the cost per 100 miles";
    cout << distance << " is how far the car can go with the gas in the tank";
    return 0;
}

