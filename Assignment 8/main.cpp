/****************************************************************************
CSCI 240         Program 8     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 4/19/2024

Purpose: Use Object Oriented Programming to create a PiggyBank class
****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
const int FIXED_WIDTH = 4;

class PiggyBank {
  private:
     //Member variables
     int numPennies;
     int numNickels;
     int numDimes;
     int numQuarters;

  public:
     //Class Constructor
     PiggyBank(){
          emptyTheBank();
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
          cout << "$" << setprecision(2) << calcPiggyBankValue();
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
          if(morePennies < 0){
               cout << "*** Error: cannot add a negative number of pennies ***" << endl;
          } else {
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
          if(moreNickels < 0){
               cout << "*** Error: cannot add a negative number of nickels ***" << endl;
          } else {
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
          if(moreDimes < 0){
               cout << "*** Error: cannot add a negative number of dimes ***" << endl;
          } else {
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
          if(moreQuarters < 0){
               cout << "*** Error: cannot add a negative number of quarters ***" << endl;
          } else {
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

};


int main() {
//Test 1 -- default constructor and printPiggyBank
cout << "***** Test 1: Default Constructor and printPiggyBank *****" << endl << endl;
cout << fixed << setprecision(2);

//create two objects using the default constructor
PiggyBank bank1;
PiggyBank bank2 = PiggyBank();

//display the two objects
cout << "bank1:" << endl;

bank1.printBank();

cout << endl << endl << "bank2:" << endl;

bank2.printBank();


//Test 2 -- printBankValue
cout << endl << endl << endl << "***** Test 2: printBankValue *****" << endl << endl
     << "bank1:" << endl;

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();
//Test 3 -- adding coins
cout << endl << endl << endl << "***** Test 3: addCoins Method *****" << endl << endl
     << "3a: Adding 2 pennies, 47 nickels, 20 dimes, and 5 quarters to bank1 produces:"
     << endl << endl;

//update bank 1: 2 pennies, 47 nickels, 20 dimes, and 5 quarters   and display
bank1.addCoins( 2, 47, 20, 5 );

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();


//update bank 2: 143 pennies, 9 nickels, 0 dimes, and 44 quarters   and display
bank2.addCoins( 143, 9, 0, 44 );

cout << endl << endl << "3b: Adding 143 pennies, 9 nickels, 0 dimes, and 44 quarters to bank2 produces:"
     << endl << endl;

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();


//Test 4 -- adding pennies
cout << endl << endl << endl << "***** Test 4: addPennies Method *****" << endl << endl
     << "4a: Adding 95 pennies to bank1:" << endl << endl;

//update bank 1: 95 pennies   and display
bank1.addPennies( 95 );

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();


cout << endl << endl << "4b: Adding -54 pennies to bank1:" << endl << endl;

//(try to) update bank 1: -54 pennies   and display
bank1.addPennies( -54 );

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();


//Test 5 -- adding nickels
cout << endl << endl << endl << "***** Test 5: addNickels Method *****" << endl << endl
     << "5a: Adding -12 nickels to bank2:" << endl << endl;

//(try to) update bank 2: -12 nickels   and display
bank2.addNickels( -12 );

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();


cout << endl << endl << "5b: Adding 17 nickels to bank2:" << endl << endl;

//update bank 2: 17 nickels   and display
bank2.addNickels(17);

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();



//Test 6 -- adding dimes
cout << endl << endl << endl << "***** Test 6: addDimes Method *****" << endl << endl
     << "6a: Adding 157 dimes to bank2:" << endl << endl;

//update bank 2: 157 dimes   and display
bank2.addDimes( 157 );

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();

cout << endl << endl << "6b: Adding -37 dimes to bank2:" << endl << endl;

//(try to) update bank 2: -37 dimes   and display
bank2.addDimes( -37 );

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();



//Test 7 -- adding quarters
cout << endl << endl << endl << "***** Test 7: addQuarters Method *****" << endl << endl
     << "7a: Adding 14 quarters to bank1: " << endl << endl;

//update bank 1: 14 quarters   and display
bank1.addQuarters( 14 );

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();


cout << endl << endl << "7b: Adding -45 quarters to bank1:" << endl << endl;

//(try to) update bank 1: -45 quarters   and display
bank1.addQuarters( -45 );

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();



//Test 8 -- bank value
cout << endl << endl << endl << "***** Test 8: Calculating the Bank Values *****" << endl << endl;

//Get the current value of both banks and calculate the total amount of money
double bank1value = bank1.calcBankValue(),
       bank2value = bank2.calcBankValue();

double total = bank1value + bank2value;

//display the calculated total
cout << "$" << bank1value << " + $" << bank2value << " = $" << total << endl << endl;


//Test 9 -- empty the bank
cout << endl << endl << endl << "***** Test 9: Emptying the PiggyBanks *****" << endl << endl
     << "It\'s time to empty the banks!" << endl << endl;

cout << endl << "9a: bank1 initially contains: " << endl << endl;

//display the current value of bank1 and the updated value after it has been emptied
bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();

bank1.emptyTheBank();

cout << endl << endl << "bank1 now contains: " << endl << endl;

bank1.printBank();

cout << endl << "Total: ";

bank1.printBankValue();



cout << endl << endl << endl << "9b: bank2 initially contains: " << endl << endl;

//display the current value of bank2 and the updated value after it has been emptied
bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();

bank2.emptyTheBank();

cout << endl << endl << "bank2 now contains: " << endl << endl;

bank2.printBank();

cout << endl << "Total: ";

bank2.printBankValue();



cout << endl << endl;

return 0;
}
