/*
Amy B

Array example from lecture notes
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

const int ARSIZE = 100;


int main()
{
int numArray[ARSIZE];      //Note use of constant

int numberElements = 0,    //number of elements in the array
    i,                     //subscript for processing the array
    num,                   //number from the user
    sum = 0;               //sum of the numbers

ifstream inFile;

inFile.open("input.txt");

if(inFile.fail()){
  cout << "Unable to open input.txt";
  exit(1);
}

//read numbers from the user and put them into the array
inFile >> num;

while ( num >= 0 ) {
  cout << num << endl;
  numArray[numberElements] = num;

  numberElements++;

  inFile >> num;
}

cout << "There are " << numberElements << " elements";


//Add up elements. Note that numberElements is the total number of values that
//were entered by the user before the negative number

/*
for ( i = 0; i < numberElements; i++ )
  {
  sum += numArray[i];
  }
*/

//Calculate the average of the numbers


/*
avg = (double) sum / numberElements;

cout << "The average is " << avg << endl;
*/

//Now go through array and print whether the number is < > = the average

/*
for ( i = 0; i < numberElements; i++ )
  {
  if ( numArray[i] < avg )
    {
    cout << numArray[i] << " is less than the average of "
         << avg << endl;
    }
  else if ( numArray[i] > avg )
    {
    cout << numArray[i] << " is greater than the average of "
         << avg << endl;
    }
  else
    {
    cout << numArray[i] << " is equal to the average of "
         << avg << endl;
    }
  }
*/

inFile.close();
return 0;
}


