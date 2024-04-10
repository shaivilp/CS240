/*
Exam Review 2:
Write a decision statement to test the value contained in a double
variable named temp. If the value is greater than 101.2,
display "it is warm outside". Otherwise, display "it is not warm outside".
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double temp;

//get the temperature from the user
cout << "What is the current temperature? ";
cin >> temp;

if(temp > 101.2){
    cout << "it is warm outside" << endl;
} else {
    cout << "it is not warm outside" << endl;
}

return 0;
}

