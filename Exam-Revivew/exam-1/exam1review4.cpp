/*
Exam Review 4:
Assuming the following variables and code has been written, complete the code
by writing a loop that will calculate the product of all the values between
1 and an upper bound, inclusive. After the loop, display the calculated product.

For example, if the user enters 4 as the upper bound, then the loop should
multiply 1 * 2 * 3 * 4 to get a product of 24 and then 24 should be displayed.
You may assume that the upper bound that is entered is greater than or equal
to 1.

Make sure to declare any other variables that are needed.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int product;   //holds the product of the values
int upperBd;   //holds the upper bound of the values to be multiplied

//Get the upper bound from the user
cout << "What is the upper bound? ";
cin >> upperBd;

product = 1;

/* answer with forloop */
for(int i = 1; i <= upperBd; i++){
    product *= i;
}

/* answer with while loop */
int count = 1;
while(count <= upperBd){
    product *= count;
    count++;
}

/* answer with dowhile loop */
int count = 1;
do {
   product *= count;
   count++; 
} while(count <= upperBd);

cout << product;
return 0;
}
