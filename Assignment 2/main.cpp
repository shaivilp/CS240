/***************************************************************
CSCI 240         Program 2     Spring 2024

Programmer: Shaivil Patel

Section: 1

Date Due: 2/2/2024 11:59 PM

Purpose: A program that will calculate and display the X and Y-coordinates for the vertex of a parabola.
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
    cout << aCoefficient << bCoefficient << cCoefficient << endl;
    double xVertex = (double) -bCoefficient / (2 * aCoefficient); 
    double yVertex = ((double) aCoefficient * pow(xVertex, 2)) + bCoefficient * xVertex + cCoefficient;

    cout << "-------------------------------\n"
            "  Quadratic Equation Analyzer\n"
            "-------------------------------" << endl;

    cout << left << setw(TWENTY_LINE_SPACER) << "a Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(4) << aCoefficient << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "b Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(4) << bCoefficient << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "c Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(4) << cCoefficient << endl;
    cout << "-------------------------------\n";
    cout << "Vertex\n"; 
    cout << left << setw(TWENTY_LINE_SPACER) << "X Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(4) << xVertex << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "Y Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(4) << yVertex << endl;
    cout << "-------------------------------\n";
    return 0;
}
