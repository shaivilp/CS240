//CSCI 240 daily - Missing Number

#include <iostream>
#include <iomanip>

using namespace std;

const int ARRAY_1_SIZE = 5,
          ARRAY_2_SIZE = 9,
          ARRAY_3_SIZE = 10,
          ARRAY_4_SIZE = 6,
          ARRAY_5_SIZE = 8,
          ARRAY_6_SIZE = 10;

void print_array( int [], int );
int missing_number( int [], int );


int main()
  {
  int array1[ARRAY_1_SIZE]= {0, 1, 2, 3, 5};
  int array2[ARRAY_2_SIZE]= {5, 0, 1, 8, 2, 3, 6, 9, 4};
  int array3[ARRAY_3_SIZE]= {6, 1, 2, 7, 8, 3, 0, 5, 9, 4};
  int array4[ARRAY_4_SIZE]= {5, 1, 3, 2, 6, 4};
  int array5[ARRAY_5_SIZE]= {0, 2, 3, 4, 5, 6, 7, 8};
  int array6[ARRAY_6_SIZE]= {10, 8, 4, 9, 1, 5, 0, 7, 6, 2};

  //Get the test number to run
  int test_num, missing;
  
  cout << "Test number? ";
  cin >> test_num;

  //execute test number 1 with array1
  if( test_num == 1 )
    {
    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array1, ARRAY_1_SIZE);

    //Find the missing number in the array
    missing = missing_number(array1, ARRAY_1_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 4)? "SUCCESS" : "FAIL") << endl;
	}
  //execute test number 2 with array2
  else if( test_num == 2 )
    {
    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array2, ARRAY_2_SIZE);

    //Find the missing number in the array
    missing = missing_number(array2, ARRAY_2_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 7)? "SUCCESS" : "FAIL") << endl;
	}
  //execute test number 3 with array3
  else if( test_num == 3 )
    {
    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array3, ARRAY_3_SIZE);

    //Find the missing number in the array
    missing = missing_number(array3, ARRAY_3_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 10)? "SUCCESS" : "FAIL") << endl;
	}
  //execute test number 4 with array4
  else if( test_num == 4 )
    {
    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array4, ARRAY_4_SIZE);

    //Find the missing number in the array
    missing = missing_number(array4, ARRAY_4_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 0)? "SUCCESS" : "FAIL") << endl;
	}
  //execute test number 5 with array5 and array6
  else
    {
    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array5, ARRAY_5_SIZE);

    //Find the missing number in the array
    missing = missing_number(array5, ARRAY_5_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 1)? "SUCCESS" : "FAIL") << endl;


    //Display the values in the array
	cout << endl << "Array values = ";
    print_array(array6, ARRAY_6_SIZE);

    //Find the missing number in the array
    missing = missing_number(array6, ARRAY_6_SIZE);

    //Display the missing number and whether the function succeeded or failed
    cout << endl << "The missing number is " << missing << endl
	     << ((missing == 3)? "SUCCESS" : "FAIL") << endl;
	}


  return 0;
  } // end main()


//This function displays the values in an array
void print_array(int a[], int l)
  {
  int i;

  //Display a leading [ and all but the last value
  cout << "[";
  for (i = 0; i < l-1; i ++)
	  cout << a[i] << ", ";

  //Display the last value in the array and the ending ]
  cout << a[l-1] << "]" << endl;
  } // print_array()

int missing_number(int array[], int size){
  //Calcuate the sum of numbers from 0 to N inclusivly
  int expectedSum = size * (size + 1) / 2;

  //Calcuate the actual sum of the array
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += array[i];
  }

  //By subtracting the actual expected sum of the arrray minus the actual sum we can find the missing number
  int missingNum = expectedSum - sum;
  return missingNum;
}