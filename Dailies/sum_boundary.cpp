/*
Sum Values Between Boundary Daily
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int lower, upper;

  //Get the lower and upper bounds
  cout << "What is the lower bound? ";
  cin >> lower;

  cout << "What is the upper bound? ";
  cin >> upper;

  if(lower > upper){
    int temp = lower;
    lower = upper;
    upper = temp;

    cout << "\n";
    cout << "*** boundary values have been swapped ***";
    cout << "\n";
  }

  int sum = 0;

  for(int i = lower; i <= upper; i++){
    sum += i;
  }
  
  cout << "\n";
  cout << "The sum of the values between " << lower << " and " << upper << " is " << sum;
  cout << "\n";

  return 0;
}
