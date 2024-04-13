/*
Exam 2 Review Problem 2

Assume that an array named array has been declared to hold
5 floats and has been completely filled with values.

Write a loop to display all the values in the array.

Write a loop to display all the values in the array in reverse order.

Write a loop to add up every other value in the array, starting
from subscript 1. Display the sum.
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main(){
float array[5] = {12.2, 25.9, 7.4, 11.1, 32.0};

//Write a loop to display all the values in the array.
for(int i = 0; i < 5; i++){
    cout << array[i] << endl;
}

cout << endl << endl;

//display in reverse order
for(int i = 4; i >= 0; i--){
    cout << array[i] << endl;
}

//Write a loop to add every other value in the array, starting
//from subscript 1. Display the sum.
double sum = 0.0;
for(int i = 1; i < 5; i += 2){
    sum += array[i];
}

cout << endl << endl;
cout << sum;

return 0;
}











