/***************************************************************
CSCI 240         Program 3     Spring 2024

Programmer: Shaivil Patel

Section: 1

Date Due: 1/26/2024

Purpose: A program that will calculate and display the X and Y-coordinates for the vertex of a parabola with error checking.
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int ELEVEN_LINE_SPACER = 11;
const int TWENTY_LINE_SPACER = 20;
int aCoefficient, bCoefficient, cCoefficient;

int main() {
    cout << "Enter the a coefficient: ";
    cin >> aCoefficient;

    cout << "Enter the b coefficient: ";
    cin >> bCoefficient;

    cout << "Enter the c coefficient: ";
    cin >> cCoefficient;

    cout << "\n\n";

    double xVertex = -bCoefficient / (2 * aCoefficient);
    double yVertex = aCoefficient * pow(xVertex, 2) + bCoefficient * xVertex + cCoefficient;

    cout << "\n-------------------------------\nQuadratic Equation Analyzer\n--------------------------------\n";
    cout << "a Coefficient" << ELEVEN_LINE_SPACER << aCoefficient << endl;
    cout << "b Coefficient " << ELEVEN_LINE_SPACER << bCoefficient << endl;
    cout << "c Coefficient" << ELEVEN_LINE_SPACER << cCoefficient << endl;
    cout << "-------------------------------\n";
    cout << "Vertex\n";
    cout << "X Coordinate" << ELEVEN_LINE_SPACER << xVertex << endl;
    cout << "Y Coordinate" << ELEVEN_LINE_SPACER << yVertex << "\n";
    cout << "-------------------------------\n";
    return 0;
}
