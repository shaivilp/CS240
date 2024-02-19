/*
Exam Review 3:
Write a decision statement to test the value contained in a string
variable called code.

If the value is equal to "F", display your first name.
If the value is equal to "L", display your last name.
If the value is anything else, display your middle name (or "Not Available" if you do not have a middle name).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
string code;

//Get a string from the user
cout << "Enter a letter: ";
cin >> code;

if(code == "F"){
    cout << "firstname" << endl;
} else if(code == "L"){
    cout << "lastname" << endl;
} else {
    cout << "middlename" << endl;
}

  
return 0;
}

