/***************************************************************
CSCI 240         Program 5     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 3/1/2024

Purpose: A calculator type of program that lets a user add, subtract, 
multiply, divide, power of, and find the factorial of 2 numbers.
***************************************************************/
#include <iostream>
#include <iomanip>

char currentChoice = 'x';
int firstNum;
int secondNum;

bool exitProgram = false;

using namespace std;

/***************************************************************
Function: displayMenu

Use:     Display the operations that the user can perform

Arguments: None

Returns:   nothing (void function)
***************************************************************/
void displayMenu() {
    cout << "What operation would you like to perform: " << endl;
    cout << "  + addition " << endl;
    cout << "  - subtraction " << endl;
    cout << "  * multiplication " << endl;
    cout << "  / division " << endl;
    cout << "  ^ number to power " << endl;
    cout << "  ! factorial " << endl;
    cout << "  q quit " << endl;
    cout << "\n";
}

/***************************************************************
Function: factorial

Use:     Return factorial of n value

Arguments: n: integer value which holds the factorial we are calculating

Returns:   int factorial
***************************************************************/
int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main(){
    //Display main menu to the user
    displayMenu();

    cout << "Operation? ";
    cin >> currentChoice;

    while(!exitProgram){
        switch (tolower(currentChoice)) {
        case '+': {
            // Ask the user for first and second numbers
            cout << "What is the first number to add? ";
            cin >> firstNum;

            cout << "What is the second number to add? ";
            cin >> secondNum;

            cout << "\n";

            //Calculate the result and display it
            cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
        case '-': {
            // Ask the user for first and second numbers
            cout << "What is the first number to subtract? ";
            cin >> firstNum;

            cout << "What is the second number to subtract? ";
            cin >> secondNum;

            cout << "\n";

            //Calculate the result and display it
            cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
        case '*': {
            // Ask the user for first and second numbers
            cout << "What is the first number to multiply? ";
            cin >> firstNum;

            cout << "What is the second number to multiply? ";
            cin >> secondNum;

            cout << "\n";

            //Calculate the result and display it
            cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
        case '/': {
            // Ask the user for first and second numbers
            cout << "What is the first number to dividend? ";
            cin >> firstNum;

            cout << "What is the second number to divisor? ";
            cin >> secondNum;

            cout << "\n";

            //Calculate the result and display it
            cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << endl;
            cout << firstNum << " % " << secondNum << " = " << firstNum % secondNum << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
        case '^': {
            // Ask the user for first and second numbers
            cout << "What is the base number? ";
            cin >> firstNum;

            cout << "What is the power? ";
            cin >> secondNum;

            cout << "\n";

            //Calculate the total and display it
            int total = 1;

            for(int i = 0; i < secondNum; i++){
                total *= firstNum;
            }

            cout << firstNum << " ^ " << secondNum << " = " << total << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
        case '!': {
            //Ask the user for the first number
            cout << "What is the number? ";
            cin >> firstNum;

            cout << "\n";

            //Calculate the factorial using our function
            int returnValue = factorial(firstNum);
            cout << firstNum << "!" << " = " << returnValue << endl;

            cout << "\n\n";
            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
            break;
        }
        case 'q': {
            exitProgram = true;
            break;
        }
        default: {
            //Display 2 new lines for spacing and the error message 
            cout << "\n";
            cout << "That is an invalid operation!" << endl;
            cout << "\n\n";

            //Display menu again
            displayMenu();
            
            //Ask for the next choice
            cout << "Next Operation? ";
            cin >> currentChoice;
            break;
        }
    }
    }

    return 0;
}