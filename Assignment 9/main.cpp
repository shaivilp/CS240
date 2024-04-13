/****************************************************************************
CSCI 240         Program 9     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 4/26/2024

Purpose: Use Object Oriented Programming to create a PiggyBank class
****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
const int FIXED_WIDTH = 4;

class PiggyBank
{
private:
    // Member variables
    int numPennies;
    int numNickels;
    int numDimes;
    int numQuarters;

public:
    // Empty class constructor
    PiggyBank(){
        emptyTheBank();
    }

    // Contructor with 4 arguments to set the values of the bank
    PiggyBank(int pennies, int nickels, int dimes, int quarters){
        emptyTheBank();
        addCoins(pennies, nickels, dimes, quarters);
    }
    //Constructor that copies values from another bank object
    PiggyBank(const PiggyBank &otherBank){
        numDimes = otherBank.numDimes;
        numNickels = otherBank.numNickels;
        numPennies = otherBank.numPennies;
        numQuarters = otherBank.numQuarters;
    }

    /***************************************************************
    Function: print
    Use: prints a title, contents of the piggy bank, and the value
         of the piggy bank
    Arguments: string - the header / title to print
    Returns:   nothing
    ***************************************************************/
    void print(string title){
        cout << title << endl;
        printBank();
        printBankValue();
        cout << endl;
    }

    /***************************************************************
    Function: printBank
    Use: prints the contents of the piggy bank
    Arguments: None
    Returns:   nothing
    ***************************************************************/
    void printBank(){
        cout << "Pennies" << setw(FIXED_WIDTH) << numPennies << setw(FIXED_WIDTH) << " "
             << "Nickels" << setw(FIXED_WIDTH) << numNickels << setw(FIXED_WIDTH) << " "
             << "Dimes" << setw(FIXED_WIDTH) << numDimes << setw(FIXED_WIDTH) << " "
             << "Quarters" << setw(FIXED_WIDTH) << numQuarters << endl;
    }

    /***************************************************************
    Function: printBankValue
    Use: prints the contents of the piggy bank in the dollar amount
    Arguments: None
    Returns:   nothing
    ***************************************************************/
    void printBankValue(){
        cout << "$" << fixed << setprecision(2) << calcBankValue() << endl;
    }

    /***************************************************************
    Function: emptyTheBank
    Use: Reset the contents of the bank back to zero
    Arguments: None
    Returns:   nothing
    ***************************************************************/
    void emptyTheBank(){
        numPennies = 0;
        numNickels = 0;
        numDimes = 0;
        numQuarters = 0;
    }

    /***************************************************************
    Function: addBanks
    Use: Ablity to combine the values of two piggy banks together
    Arguments: int pennies - number to pennies to add to the current bank
               int nickels - number to nickels to add to the current bank
               int dimes - number to dimes to add to the current bank
               int quarters - number to quarters to add to the current bank
    Returns:   PiggyBank object with the combined values of the two banks
    ***************************************************************/
    PiggyBank addBanks(int pennies, int nickels, int dimes, int quarters){
        int totalPennies = numPennies + pennies;
        int totalNickels = numNickels + nickels;
        int totalDimes = numDimes + dimes;
        int totalQuarters = numQuarters + quarters;
        return PiggyBank(totalPennies, totalNickels, totalDimes, totalQuarters);
    }

    /***************************************************************
    Function: addBanks
    Use: Ablity to combine the values of two piggy banks together
    Arguments: otherBank - PiggyBank object to add to the current bank
    Returns:   PiggyBank object with the combined values of the two banks
    ***************************************************************/
    PiggyBank addBanks(PiggyBank otherBank){
        return addBanks(otherBank.numPennies, otherBank.numNickels, otherBank.numDimes, otherBank.numQuarters);
    }

    /***************************************************************
    Function: addCoins
    Use: Ablity to add pennies, nickels, dimes, and quarters into
         the bank at the same time
    Arguments: int morePennies - number to pennies to add to the bank
               int moreNickels - number to nickels to add to the bank
               int moreDimes - number to dimes to add to the bank
               int moreQuarters - number to quarters to add to the bank
    Returns:   nothing
    ***************************************************************/
    void addCoins(int morePennies, int moreNickels, int moreDimes, int moreQuarters){
        addPennies(morePennies);
        addNickels(moreNickels);
        addDimes(moreDimes);
        addQuarters(moreQuarters);
    }

    /***************************************************************
    Function: addPennies
    Use: Add x amount of pennies to the bank
    Arguments: int morePennies - number of pennies to add to
               existing pennies in the bank
    Returns:   nothing
    ***************************************************************/
    void addPennies(int morePennies){
        if (morePennies < 0)
        {
            cout << "*** Error: cannot add a negative number of pennies ***" << endl;
        }
        else
        {
            numPennies += morePennies;
        }
    }

    /***************************************************************
    Function: addNickels
    Use: Add x amount of nickels to the bank
    Arguments: int moreNickels - number of nickels to add to
               existing nickels in the bank
    Returns:   nothing
    ***************************************************************/
    void addNickels(int moreNickels){
        if (moreNickels < 0)
        {
            cout << "*** Error: cannot add a negative number of nickels ***" << endl;
        }
        else
        {
            numNickels += moreNickels;
        }
    }

    /***************************************************************
    Function: addDimes
    Use: Add x amount of dimes to the bank
    Arguments: int moreDimes - number of dimes to add to
               existing dimes in the bank
    Returns:   nothing
    ***************************************************************/
    void addDimes(int moreDimes){
        if (moreDimes < 0)
        {
            cout << "*** Error: cannot add a negative number of dimes ***" << endl;
        }
        else
        {
            numDimes += moreDimes;
        }
    }

    /***************************************************************
    Function: addQuarters
    Use: Add x amount of quarters to the bank
    Arguments: int moreQuarters - number of quarters to add to
               existing quarters in the bank
    Returns:   nothing
    ***************************************************************/
    void addQuarters(int moreQuarters){
        if (moreQuarters < 0)
        {
            cout << "*** Error: cannot add a negative number of quarters ***" << endl;
        }
        else
        {
            numQuarters += moreQuarters;
        }
    }

    /***************************************************************
    Function: calcPiggyBankValue
    Use: calcuates and returns the value of the piggy bank
    Arguments: None
    Returns:   a double value of all coins combined in dollars and cents
    ***************************************************************/
    double calcBankValue(){
        double sum = 0.0;
        sum += (numPennies * 0.01);
        sum += (numNickels * 0.05);
        sum += (numDimes * 0.10);
        sum += (numQuarters * 0.25);
        return sum;
    }

    /***************************************************************
    Function: isEqual
    Use: detirmines if the current bank values are equal to passed
         in values
    Arguments: int pennies - number off pennies to compare to the current bank
               int nickels - number off nickels to compare to the current bank
               int dimes - number off dimes to compare to the current bank
               int quarters - number off quarters to compare to the current bank
    Returns:   a boolean value if the values are equal or not
    ***************************************************************/
    bool isEqual(int pennies, int nickels, int dimes, int quarters){
        double otherSum = 0.0;
        otherSum += (pennies * 0.01);
        otherSum += (nickels * 0.05);
        otherSum += (dimes * 0.10);
        otherSum += (quarters * 0.25);

        double currentSum = calcBankValue();
        return currentSum == otherSum;
    }

    /***************************************************************
    Function: isEqual
    Use: detirmines if the current bank values are equal to passed
         in values
    Arguments: otherBank - PiggyBank object to compare to the current bank
    Returns:   a boolean value if the values are equal or not
    ***************************************************************/
    bool isEqual(PiggyBank otherBank){
        return isEqual(otherBank.numPennies, otherBank.numNickels, otherBank.numDimes, otherBank.numQuarters);
    }

    /***************************************************************
    Function: isLessThan
    Use: detirmines if the current bank values are less than the passed
         in values
    Arguments: int pennies - number off pennies to compare to the current bank
               int nickels - number off nickels to compare to the current bank
               int dimes - number off dimes to compare to the current bank
               int quarters - number off quarters to compare to the current bank
    Returns:   a boolean - if the current bank is less than passed in bank
               or not
    ***************************************************************/
    bool isLessThan(int pennies, int nickels, int dimes, int quarters){
        double otherSum = 0.0;
        otherSum += (pennies * 0.01);
        otherSum += (nickels * 0.05);
        otherSum += (dimes * 0.10);
        otherSum += (quarters * 0.25);
        
        double currentSum = calcBankValue();
        return currentSum < otherSum;
    }

    /***************************************************************
    Function: isLessThan
    Use: detirmines if the current bank values are less than the passed
         in values
    Arguments: otherBank - PiggyBank object to compare to the current bank
    Returns:   a boolean - if the current bank is less than passed in bank
               or not
    ***************************************************************/
    bool isLessThan(PiggyBank otherBank){
        return isLessThan(otherBank.numPennies, otherBank.numNickels, otherBank.numDimes, otherBank.numQuarters);
    }

    /***************************************************************
    Function: getCoin
    Use: returns the nunmber of coins by index type
    Arguments: int coinIndex - index of the coin type
    Returns:  integer - number of certain type of coins
    ***************************************************************/
    int getCoin(int coinIndex){
        switch (coinIndex){
            case 0:
                return numPennies;
                break;
            case 1:
                return numNickels;
                break;
            case 2:
                return numDimes;
                break;
            case 3:
                return numQuarters;
                break;
            default:
                return -1;
        }
    }
};

//Function Prototypes
void printSectionTitle(string);

int main(){
    //Create the 3 banks
    PiggyBank bank1 = PiggyBank(12, 34, 56, 78);
    PiggyBank bank2 = PiggyBank(23, -5, -10, 31);
    PiggyBank bank3 = PiggyBank(bank1);

    printSectionTitle("Initial values in the bank objects");
    bank1.print("Bank 1");
    bank2.print("Bank 2");
    bank3.print("Bank 3");

    printSectionTitle("Using the addBanks method with 4 arguments");
    PiggyBank bank4 = PiggyBank();
    bank4.print("Bank 4 intial values");
    bank4 = bank2.addBanks(4, 27, 45, 7);

    bank2.print("Bank 2 values after using addBanks method");
    bank4.print("Bank 4 values after using addBanks method");

    printSectionTitle("Using the addBanks method with PiggyBank object");
    PiggyBank bank5 = PiggyBank();
    bank1.print("Bank 1 intial values");
    bank2.print("Bank 2 intial values");
    bank5.print("Bank 5 intial values");
    cout << endl;

    bank5 = bank5.addBanks(bank1);
    bank5 = bank5.addBanks(bank2);

    bank1.print("Bank 1 after using addBanks method");
    bank2.print("Bank 2 after using addBanks method");
    bank5.print("Bank 5 after using addBanks method");

    printSectionTitle("Using the isEqual method with 4 arguments");
    //Compare bank4 to passed in values
    bank4.isEqual(27, 27, 45, 38) ? cout << "Test 1: banks are equal" << endl : cout << "Test 1: banks are not equal" << endl;

    //Compare bank5 to passed in values
    bank5.isEqual(35, 34, 15, 7) ? cout << "Test 2: banks are equal" << endl : cout << "Test 2: banks are not equal" << endl;

    printSectionTitle("Using the isEqual method with PiggyBank object");
    bank2.isEqual(bank5) ? cout << "Test 1: banks are equal" << endl : cout << "Test 1: banks are not equal" << endl;

    bank1.isEqual(bank3) ? cout << "Test 2: banks are equal" << endl : cout << "Test 2: banks are not equal" << endl;
    
    printSectionTitle("Current values in the bank objects");
    bank1.print("Bank 1");
    bank2.print("Bank 2");
    bank3.print("Bank 3");
    bank4.print("Bank 4");
    bank5.print("Bank 5");

    printSectionTitle("Using the isLessThan method with 4 arguments");
    bank1.isLessThan(12, 33, 42, 108) ? cout << "Test 1: bank1 is less than the other bank" << endl : cout << "Test 1: bank1 is not less than the other bank" << endl;

    bank2.isLessThan(3, 4, 70, 3) ? cout << "Test 2: bank2 is less than the other bank" << endl : cout << "Test 2: bank2 is not less than the other bank" << endl;

    printSectionTitle("Using the isLessThan method with PiggyBank object");
    bank3.isLessThan(bank5) ? cout << "Test 1: bank3 is less than bank5" << endl : cout << "Test 1: bank3 is not less than bank5" << endl;

    bank4.isLessThan(bank2) ? cout << "Test 2: bank4 is less than bank2" << endl : cout << "Test 2: bank4 is not less than bank2" << endl;

    printSectionTitle("Using the getCoin method");
    cout << "bank1 contains " << bank1.getCoin(0) << " pennies" << endl;
    cout << "bank2 contains " << bank2.getCoin(1) << " nickels" << endl; 
    cout << "bank3 contains " << bank3.getCoin(2) << " dimes" << endl;
    cout << "bank4 contains " << bank4.getCoin(3) << " quarters" << endl;
    cout << "getCoin returned " << bank5.getCoin(100) << " with invalid index" << endl << endl;
    return 0;
}

/***************************************************************
Function: printSectionTitle
Use: seperate out the sections of the program with a title
Arguments: string title - title / header to print
Returns:  nothing
***************************************************************/
void printSectionTitle(string title){
    cout << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << title << endl;
    cout << endl;
}