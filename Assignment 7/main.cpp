/****************************************************************************
CSCI 240         Program 7     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 3/29/2024

Purpose: This program reads two sets of numbers from two files, sorts them,
calculates the mean, median, low, high, and standard deviation of each set 
and then calculates the differences between the stats of the two sets.
****************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

const double END_INPUT = -999.99;
const int MAX_ARRAY_SIZE = 20;
const int MAX_VALUES_PER_LINE = 8;
const int FIXED_WIDTH = 8;

int buildArray(string, double[]);
void printArray(string, double[], int);
void sortArray(double[], int);
double mean(double[], int);
double median(double[], int);
double low(double[], int);
double high(double[], int);
double standardDeviation(double[], int);

int main(){
    //Create two blank arrays to store the values
    double setA[MAX_ARRAY_SIZE];
    double setB[MAX_ARRAY_SIZE];
    int numValuesA = 0;
    int numValuesB = 0;

    //Build the arrays from the input files
    numValuesA = buildArray("data7A.txt", setA);
    numValuesB = buildArray("data7B.txt", setB);

    //Print the unsorted arrays
    printArray("Unsorted Set A", setA, numValuesA);
    printArray("Unsorted Set B", setB, numValuesB);

    //Sort the arrays
    sortArray(setA, numValuesA);
    sortArray(setB, numValuesB);
    
    //Print the sorted arrays
    printArray("Sorted Set A", setA, numValuesA);
    printArray("Sorted Set B", setB, numValuesB);   

    //Calculate stats for set A and B
    double meanA = mean(setA, numValuesA);
    double meanB = mean(setB, numValuesB);

    double medianA = median(setA, numValuesA);
    double medianB = median(setB, numValuesB);

    double lowA = low(setA, numValuesA);
    double lowB = low(setB, numValuesB);

    double highA = high(setA, numValuesA);
    double highB = high(setB, numValuesB);

    double standardDeviationA = standardDeviation(setA, numValuesA);
    double standardDeviationB = standardDeviation(setB, numValuesB);


    //Print the stats for set A and B
    cout << "Set A Statistics" << endl << endl;
    cout << "Mean: " << fixed << setprecision(2) << meanA << endl;
    cout << "Median: " << fixed << setprecision(2) << medianA << endl;
    cout << "Low: " << fixed << setprecision(2) << lowA << endl;
    cout << "High: " << fixed << setprecision(2) << highA << endl;
    cout << "Standard Deviation: " << fixed << setprecision(2) << standardDeviationA << endl << endl;
    
    cout << "Set B Statistics" << endl << endl;
    cout << "Mean: " << fixed << setprecision(2) << meanB << endl;
    cout << "Median: " << fixed << setprecision(2) << medianB << endl;
    cout << "Low: " << fixed << setprecision(2) << lowB << endl;
    cout << "High: " << fixed << setprecision(2) << highB << endl;
    cout << "Standard Deviation: " << fixed << setprecision(2) << standardDeviationB << endl << endl;

    //Calculate the differneces between the stats of set A and B
    cout << "Differences" << endl << endl;
    cout << "Mean: " << fixed << setprecision(2) << abs(meanA - meanB) << endl;
    cout << "Median: " << fixed << setprecision(2) << abs(medianA - medianB) << endl;
    cout << "Standard Deviation: " << fixed << setprecision(2) << abs(standardDeviationA - standardDeviationB) << endl << endl;

    return 0;
}

/***************************************************************
Function: buildArray

Use:     Build arrays by reading form a file

Arguments: string filename - name of the file to read from
           double array[] - array to store the values read from the file

Returns:   int size of the array built
***************************************************************/
int buildArray(string filename, double array[]){
    ifstream input;
    input.open(filename);
    if(input.fail()){
        cout << "Error opening file " << filename << endl;
        exit(1);
    }
    
    double value;
    int index;
    for(index = 0; index < MAX_ARRAY_SIZE; index++){
        input >> value;
        if(value == END_INPUT){
            break;
        }
        array[index] = value;
    }

    input.close();
    return index;

}

/***************************************************************
Function: printArray

Use:    print the values of an array in a nice format

Arguments: string title - title of the print message
           double array[] - the array to print
           int numValues - the number of values in the array

Returns:   nothing
***************************************************************/
void printArray( string title, double array[], int numValues){
    cout << title << endl << endl;

    for(int i = 0; i < numValues; i++){
        cout << right << fixed << setprecision(2) << setw(FIXED_WIDTH) << array[i] << " ";
        if((i + 1) % MAX_VALUES_PER_LINE == 0){
            cout << endl;
        }
    }
    cout << endl << endl;
}

/***************************************************************
Function: sortArray

Use:    sort the values of an array in ascending order

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:   nothing
***************************************************************/
void sortArray(double array[], int numValues){
    for(int i = 0; i < numValues; i++){
        int smallest = i;
        for(int j = i + 1; j < numValues; j++){
            if(array[j] < array[smallest]){
                smallest = j;
            }
        }
        double temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }
}

/***************************************************************
Function: mean

Use:    calculate the mean of an array

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:   mean of the array
***************************************************************/
double mean( double array[], int numValues){
    double sum = 0;
    for(int i = 0; i < numValues; i++){
        sum += array[i];
    }
    return sum / numValues;
}

/***************************************************************
Function: median

Use:    calculate the median of an array

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:   median of the array
***************************************************************/
double median( double array[], int numValues){
    int middle = numValues / 2;
    return array[middle];
}

/***************************************************************
Function: low

Use:    find the lowest value in the array

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:  lowest value in the array
***************************************************************/
double low(double array[], int numValues){
    return array[0];
}

/***************************************************************
Function: high

Use:    find the highest value in the array

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:  highest value in the array
***************************************************************/
double high(double array[], int numValues){
    return array[numValues - 1];
}

/***************************************************************
Function: standardDeviation

Use:    find the standard deviation of the array

Arguments: double array[] - the array to sort
           int numValues - the number of values in the array

Returns:  the standard deviation of the array
***************************************************************/
double standardDeviation(double array[], int numValues){
    double sumArraySquared = 0;
    for ( int i = 0; i < numValues; ++i ) {
        sumArraySquared += pow(array[i], 2);
    }

    double sumArray = 0;
    for ( int i = 0; i < numValues; ++i ) {
        sumArray += array[i];
    }

    return sqrt(( sumArraySquared - (pow(sumArray, 2) / numValues)) / (numValues - 1));
}
