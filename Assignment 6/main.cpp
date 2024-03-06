/***************************************************************
CSCI 240         Program 6     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 3/8/2024

Purpose: A calculator type of program that lets a user add, subtract,
multiply, divide, power of, and find the factorial of 2 numbers.
***************************************************************/
#include <iostream>
#include <iomanip>

int firstNum;
int secondNum;

bool exitProgram = false;

using namespace std;

/***************************************************************
Function: char

Use:     Display the operations that the user can perform

Arguments: None

Returns:   Character choice
***************************************************************/
char menu(){
    char choice = 'x';

    cout << "What operation would you like to perform: " << endl;
    cout << "  + addition " << endl;
    cout << "  - subtraction " << endl;
    cout << "  * multiplication " << endl;
    cout << "  / division " << endl;
    cout << "  ^ number to power " << endl;
    cout << "  ! factorial " << endl;
    cout << "  q quit " << endl;
    cout << "\n";

    cout << "Operation? ";

    cin >> choice;
    while (choice != '+' && choice != '-' && choice != '*' && choice != '/' && choice != '^' && choice != '!' && tolower(choice) != 'q')
    {
        cout << "Error: that is an invalid operation. Try again: ";
        cin >> choice;
    }

    cout << "\n";

    return choice;
}

/***************************************************************
Function: addition

Use: Add two numbers together

Arguments: integer value1 - first number
           integer value2 - second number to add to first number

Returns:   integer result
***************************************************************/
int addition(int value1, int value2){
    return value1 + value2;
}

/***************************************************************
Function: subtraction

Use: Subtract two numbers together

Arguments: integer value1 - first number
           integer value2 - second number to subtract from first number

Returns:   integer result
***************************************************************/
int subtraction(int value1, int value2){
    return value1 - value2;
}

/***************************************************************
Function: multiplication

Use:  Multiply two numbers together

Arguments: integer value1 - first number to multiply with second
           integer value2 - second number to multiply with first number

Returns:   integer result
***************************************************************/
int multiplication(int value1, int value2){
    return value1 * value2;
}

/***************************************************************
Function: quotient

Use: Divide two numbers together

Arguments: integer dividend - the dividend number
           integer divisor - the divisor number

Returns:   integer result
***************************************************************/

int quotient(int dividend, int divisor){
    return dividend / divisor;
}

/***************************************************************
Function: remainder

Use:  Find remainder when dividing two numbers

Arguments: integer dividend - the dividend number
           integer divisor - the divisor number

Returns:   integer result
***************************************************************/
int remainder(int dividend, int divisor){
    return dividend % divisor;
}

/***************************************************************
Function: power

Use:  Find the power of two numbers

Arguments: integer base - the base number of the power function
           integer power - the power to which the base needs to be raised to.

Returns:   integer result
***************************************************************/

int power(int base, int power){
    int total = 1;

    for (int i = 0; i < power; i++)
    {
        total *= base;
    }

    return total;
}

/***************************************************************
Function: factorial

Use:  Find the factorial of a number

Arguments: integer value - value to be factorial'd

Returns:   integer result
***************************************************************/
int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

/***************************************************************
Function: getValue

Use:  Get a value from the user

Arguments: string prompt - string prompt to be displayed to the user

Returns:   integer value
***************************************************************/

int getValue(string prompt){
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

/***************************************************************
Function: getNonNegitiveValue

Use:  Get a non-negitive value from the user

Arguments: string prompt - string prompt to be displayed to the user

Returns:   integer value
***************************************************************/

int getNonNegitiveValue(string prompt){
    int value;
    cout << prompt;
    cin >> value;

    while (value < 0)
    {
        cout << "Error: the value cannot be negative. Try again: ";
        cin >> value;
    }

    return value;
}

/***************************************************************
Function: getNonZeroValue

Use:  Get a non-zero value from the user

Arguments: string prompt - string prompt to be displayed to the user

Returns:   integer value
***************************************************************/
int getNonZeroValue(string prompt){
    int value;
    cout << prompt;
    cin >> value;

    while (value == 0)
    {
        cout << "Error: the value cannot be zero. Try again: ";
        cin >> value;
    }
    return value;
}

/***************************************************************
Function: main

Use:  Main function

Arguments: None

Returns: integer exit status code
***************************************************************/
int main(){
    // Display main menu to the user
    char choice = menu();

    while (!exitProgram){
        switch (tolower(choice)){
        case '+': {
            // Ask the user for first and second numbers
            firstNum = getValue("What is the first number to add? ");
            cout << "\n";
            secondNum = getValue("What is the second number to add ");
            cout << "\n";
            int result = addition(firstNum, secondNum);

            // Display the result
            cout << firstNum << " + " << secondNum << " = " << result << endl;
            break;
        }
        case '-': {
            // Ask the user for first and second numbers
            firstNum = getValue("What is the first number to subtract? ");
            cout << "\n";
            secondNum = getValue("What is the second number to subtract ");
            cout << "\n";
            int result = subtraction(firstNum, secondNum);

            // Display the result
            cout << firstNum << " - " << secondNum << " = " << result << endl;
            break;
        }
        case '*': {
            // Ask the user for first and second numbers
            firstNum = getValue("What is the first number to multiply? ");
            cout << "\n";
            secondNum = getValue("What is the second number to multiply ");
            cout << "\n";
            int result = multiplication(firstNum, secondNum);

            // Display the result
            cout << firstNum << " * " << secondNum << " = " << result << endl;
            break;
        }
        case '/': {
            // Ask the user for first and second numbers
            firstNum = getValue("What is the dividend? ");
            cout << "\n";
            secondNum = getNonZeroValue("What is the divisor? ");
            cout << "\n";
            int result = quotient(firstNum, secondNum);
            int remaining = remainder(firstNum, secondNum);

            // Display the result
            cout << firstNum << " / " << secondNum << " = " << result << endl;
            cout << firstNum << " % " << secondNum << " = " << remaining << endl;
            break;
        }
        case '^': {
            // Ask the user for first and second numbers
            firstNum = getValue("What is the base number? ");
            cout << "\n";
            secondNum = getNonNegitiveValue("What is the power? ");
            cout << "\n";
            int result = power(firstNum, secondNum);

            // Display the result
            cout << firstNum << " ^ " << secondNum << " = " << result << endl;
            break;
        }
        case '!': {
            // Ask the user for the first number
            firstNum = getNonNegitiveValue("What is the number? ");
            cout << "\n";
            int result = factorial(firstNum);

            // Display the result
            cout << firstNum << "!"
                 << " = " << result << endl;
            break;
        }
        case 'q': {
            exitProgram = true;
            break;
        }
        }
        if (!exitProgram) {
            cout << "\n\n";
            // Display menu again
            choice = menu();
        }
    }
    return 0;
}