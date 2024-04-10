/*
Exam 2 Review Problem 4

A function named calculate2 takes two arguments: an array
of doubles, and an integer that holds a count of the number
of values in the array. It returns a double: the average
of the values in the array.

What is the function prototype?

What is a possible function header?

Write a calling statement for the calculate2 function
using the following declarations:

double average;
int numValues;

double scores[100];
*/


#include <iostream>
#include <iomanip>

using namespace std;
/*
A function named calculate2 takes two arguments: an array
of doubles, and an integer that holds a count of the number
of values in the array. It returns a double: the average
of the values in the array.
*/

//a) What is the function prototype?
double calculate2(double [], int);


int main()
{
/*
A function named calculate2 takes two arguments: an array
of doubles, and an integer that holds a count of the number
of values in the array. It returns a double: the average
of the values in the array.
*/

//c) Write a calling statement for the calculate2 function
//using the following declarations:

double average;
int numValues;

double scores[100];
average = calculate2(scores, numValues);

return 0;
}

/*
A function named calculate2 takes two arguments: an array
of doubles, and an integer that holds a count of the number
of values in the array. It returns a double: the average
of the values in the array.
*/

//b) What is a possible function header?
double calculate2(double array[], int count){
    
}

