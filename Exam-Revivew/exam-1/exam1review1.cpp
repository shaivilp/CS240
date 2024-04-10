/*
Exam Review 1:
Write a decision statement to test the value contained in a character
variable named choice. If the value is 'w', display the message
"So close... I was thinking of W".
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
char choice;

//Get a value from the user
cout << "What letter am I thinking of? ";
cin >> choice;

if(choice == 'w'){
    cout << "So close... I was thinking of W";
}

return 0;
}

