/*
Exam 2 Review Problem 3

Declare an array to hold 15 double values. Initialize the array
so the first value is 2.40, the second is 2.41, the third is 3.40,
and the remaining values are 0. Do this in two different ways.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//Way 1 (part of declaration statement)
double array[15] = {2.40, 2.41, 3.40};

//Way 2 ( as several executable statements)
double array2[15];
array2[0] = 2.40;
array2[1] = 2.41;
array2[2] = 3.40;

for(int i = 3; i < 15; i++){
    array2[i] = 0.0;
}

return 0;
}






