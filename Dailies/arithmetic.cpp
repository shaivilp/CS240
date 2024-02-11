//
//Arithmetic Daily
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
  {
  int num1, num2;

  cout << "First number? ";
  cin >> num1;

  cout << "Second number? ";
  cin >> num2;
  cout << "\n";
  
  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
  cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
  cout << "\n";

  cout << num2 << " - " << num1 << " = " << num2 - num1 << endl;
  cout << num2 << " / " << num1 << " = " << num2 / num1 << endl;
  cout << num2 << " % " << num1 << " = " << num2 - num1 << endl;

  cout << "\n";
  return 0;
  }