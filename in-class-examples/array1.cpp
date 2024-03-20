/*
Amy B

Array example from lecture notes
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
int numArray[10];      //array to hold 10 integers

//Version 1: add values to array using assignment statements

numArray[0] = 1;
numArray[1] = 3;
numArray[2] = 5;
numArray[3] = 7;
numArray[4] = 9;
numArray[5] = 11;
numArray[6] = 13;
numArray[7] = 15;
numArray[8] = 17;
numArray[9] = 19;

//display the values in the array one value at a time

cout << "numArray[0] has the value " << numArray[0] << endl
     << "numArray[1] has the value " << numArray[1] << endl
     << "numArray[2] has the value " << numArray[2] << endl
     << "numArray[3] has the value " << numArray[3] << endl
     << "numArray[4] has the value " << numArray[4] << endl
     << "numArray[5] has the value " << numArray[5] << endl
     << "numArray[6] has the value " << numArray[6] << endl
     << "numArray[7] has the value " << numArray[7] << endl
     << "numArray[8] has the value " << numArray[8] << endl
     << "numArray[9] has the value " << numArray[9] << endl;

//loop that executes 10 times to display the values in
//the array

//begin to end of array
/*
int sub;
for( sub = 0; sub < 10; sub++ )
  {
  cout << "numArray[" << sub << "] has the value " 
       << numArray[sub] << endl;
  }
*/

//end to begin of array





//Version 2: add values to array using a loop

/*
int i;

for (i = 0; i < 10; i++)
  {
  numArray[i] = (i*2) + 1;
  }

cout << "numArray[0] has the value " << numArray[0] << endl
     << "numArray[1] has the value " << numArray[1] << endl
     << "numArray[2] has the value " << numArray[2] << endl
     << "numArray[3] has the value " << numArray[3] << endl
     << "numArray[4] has the value " << numArray[4] << endl
     << "numArray[5] has the value " << numArray[5] << endl
     << "numArray[6] has the value " << numArray[6] << endl
     << "numArray[7] has the value " << numArray[7] << endl
     << "numArray[8] has the value " << numArray[8] << endl
     << "numArray[9] has the value " << numArray[9] << endl;

*/


//display the array using a loop
/*
cout << endl << endl;

for( i = 0; i < 10; i++ )
  {
  cout << "numArray[" << i << "] has the value " << numArray[i] << endl;
  }
*/

//version 3 - modify the code so that the user can specify
//            how many values to put in the array and display
//            (assume the user's number will be <= 10)


return 0;
}


