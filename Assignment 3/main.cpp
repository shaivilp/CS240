/***************************************************************
CSCI 240         Program 3     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 2/9/2024

Purpose: A program that will calculate and display the X and Y-coordinates and the concavity with the number of roots
and displaying each one with input checking for the vertex of a parabola.
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int ELEVEN_LINE_SPACER = 11;
const int TWENTY_LINE_SPACER = 20;
string concavity = "NO CONCAVITY";
string numRoots = "NO";
int aCoefficient, bCoefficient, cCoefficient;

int main() {
    //Take in the a, b, and c coefficients
    cout << "Enter the a coefficient (non-zero value): ";
    cin >> aCoefficient;

    //Checking if the a-coefficient is non-zero
    if(aCoefficient == 0){
        cout << "Error: the a-coefficient MUST be non-zero. Try again: ";
        cin >> aCoefficient;    
    }

    cout << "Enter the b coefficient: ";
    cin >> bCoefficient;

    cout << "Enter the c coefficient: ";
    cin >> cCoefficient;

    cout << "\n\n";
    //Calculate the x and y vertex and the discriminant
    double xVertex = (double) -bCoefficient / (2 * aCoefficient); 
    double yVertex = ((double) aCoefficient * pow(xVertex, 2)) + bCoefficient * xVertex + cCoefficient;
    double discriminant = pow(bCoefficient, 2) - (4 * aCoefficient * cCoefficient);

    //Calculte output string for num of roots
    if(discriminant > 0){
        numRoots = "TWO roots";
    } else if(discriminant == 0){
        numRoots = "ONE root";
    } else {
        numRoots = "NO roots";
    } 

    double root1 = (-bCoefficient + sqrt(discriminant)) / (2 * aCoefficient);
    double root2 = (-bCoefficient - sqrt(discriminant)) / (2 * aCoefficient);

    //Calculate the concavity
    concavity = aCoefficient < 0 ? "DOWNWARD" : "UPWARD";

    //Display a, b, c, x, y, concavity, and num of roots and roots themselves if they exist.
    cout << "-------------------------------\n"
            "  Quadratic Equation Analyzer\n"
            "-------------------------------" << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "a Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(3) << aCoefficient << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "b Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(3) << bCoefficient << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "c Coefficient" << right << setw(ELEVEN_LINE_SPACER) << setprecision(3) << cCoefficient << endl;
    cout << "-------------------------------\n";
    cout << "Vertex\n"; 
    cout << left << setw(TWENTY_LINE_SPACER) << "X Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(3) << xVertex << endl;
    cout << left << setw(TWENTY_LINE_SPACER) << "Y Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(3) << yVertex << endl;
    cout << "-------------------------------\n";
    cout << "The parabola opens " << concavity << endl;
    cout << "-------------------------------\n";
    cout << "The parabola has " << numRoots << endl;
    
    //Check if there are roots and display them if they exist
    if (numRoots != "NO roots"){
        cout << left << setw(TWENTY_LINE_SPACER) << "Root 1 - X Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(3) << root1 << endl;
    }

    if(numRoots == "TWO roots"){
        cout << left << setw(TWENTY_LINE_SPACER) << "Root 2 - X Coordinate" << right << setw(ELEVEN_LINE_SPACER) << fixed << setprecision(3) << root2 << endl;
    }

    return 0;
}
