//Is Even Odd daily
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int num;

  //get a number from the user
  cout << "Enter an integer value: ";
  cin >> num;
  cout << "\n";

  if(num == 0){
    cout << "The value cannot be 0." << endl;
    return 0;
  }

  if (num % 2 == 0){
    cout << "The value " << num << " is EVEN." << endl;
  } else if(num % 1 == 0){
    cout << "The value " << num << " is ODD." << endl;
  }
  cout << "\n";
  
  return 0;
}
