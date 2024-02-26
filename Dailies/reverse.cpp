//CSCI 240 daily - Reverse Number

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int N;
    
  cout << "N value (must be positive)? ";
  cin >> N;

  while(N <= 0){
    cout << "Error: the N-value must be positive. Try again: ";
    cin >> N;
  }

  int orginal = N;
  int reverse = 0;

  while (N != 0){
    int remainder = N % 10;
    reverse = reverse * 10 + remainder;
    N /= 10;
  }
  
  cout << endl;

  cout << "Original: " << orginal << endl;
  cout << "Reversed: ";
  while (orginal != 0) {
      cout << orginal % 10;
      orginal /= 10;
  }

  cout << endl;
  return 0;
}