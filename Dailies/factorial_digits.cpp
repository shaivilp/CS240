// 240 Count Factorial Digits Daily

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int N;

  //Get the value for N
  cout << "N value (must be greater than or equal to 0)? ";
  cin >> N;

  if(N < 0 || N > 12){
    cout << "\n";
    cout << "Invalid Input: " << N << endl;
    return 0;
  }

  int factorial = 1;
  for (int i = 1; i <= N; i++) {
        factorial *= i;
  }

  //Eaiest way to count the digits is to convert to a string and get length
  string factorialString = to_string(factorial);
  int digits = factorialString.length();
  
  cout << "\n";
  cout << N << "! is equal to " << factorial << ". There are " << digits << " digits." << endl;

  return 0;
} // end main() 
