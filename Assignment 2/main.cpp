/***************************************************************
CSCI 240         Program 1     Spring 2024

Programmer: Shaivil Patel

Section: 1

Date Due: 1/26/2024

Purpose: A program that will calculate and display the X and Y-coordinates for the vertex of a parabola.
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const string ELEVEN_LINE_SPACER = "           ";
const string TWENTY_LINE_SPACER = "                    ";
int aCoefficient, bCoefficient, cCoefficient;

int main() {
    cout << "Enter the a coefficient: ";
    cin >> aCoefficient;

    cout << "Enter the b coefficient: ";
    cin >> bCoefficient;

    cout << "Enter the c coefficient: ";
    cin >> cCoefficient;

    cout << TWENTY_LINE_SPACER;
    cout << TWENTY_LINE_SPACER;

    double xVertex = -bCoefficient / (2 * aCoefficient);
    double yVertex = aCoefficient * pow(xVertex, 2) + bCoefficient * xVertex + cCoefficient;
    // Make it not round up and display negative integers
    cout << "\n-------------------------------\nQuadratic Equation Analyzer\n--------------------------------\n";
    cout << "a Coefficient" << ELEVEN_LINE_SPACER << aCoefficient << "\n";
    cout << "b Coefficient " << ELEVEN_LINE_SPACER << bCoefficient << "\n";
    cout << "c Coefficient" << ELEVEN_LINE_SPACER << cCoefficient << "\n";
    cout << "-------------------------------\n";
    cout << "Vertex\n";
    cout << "X Coordinate" << ELEVEN_LINE_SPACER << xVertex << "\n";
    cout << "Y Coordinate" << ELEVEN_LINE_SPACER << yVertex << "\n";
    cout << "-------------------------------\n";
    return 0;
}
