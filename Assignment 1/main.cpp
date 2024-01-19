/***************************************************************
CSCI 240         Program 1     Spring 2024

Programmer: Shaivil Patel

Section: 1

Date Due: 1/26/2024

Purpose: The purpose of this program is to calculate and display
         the gravitational force between two objects.

         The user provides the mass of the two objects and the
         distance between the objects.
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
int main() {
    float mass1, mass2, distance;

    cout << "****************************************\n"
            "     Gravitational Force Calculator\n"
            "****************************************";

    cout << "\n\n";
    cout << "Enter the mass of object 1 (in kilograms): ";
    cin >> mass1;

    cout << "Enter the mass of object 2 (in kilograms): ";
    cin >> mass2;

    cout << "Enter the distance between the 2 objects (in meters): ";
    cin >> distance;

    float gConstant = 0.667 * pow(10, -10);
    float force = (gConstant * mass1 * mass2) / pow(distance, 2);
    cout << "\n\n";

    cout << "The force of gravitational attraction is: " << force << " newtons";
    return 0;
}