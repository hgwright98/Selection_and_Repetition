#include <iostream>
#include <string>
using namespace std;
// Start of the main function
int main() {
  // establishing all of the variables I will need
  int numberOne;
  int numberTwo;
  char Opp;
  string equation;
  // Get all the users inputs need for the calculations
  cout << "Please input your first integer: ";
  cin >> numberOne;
  cout << "Please input your second integer: ";
  cin >> numberTwo;
  cout << "Please input your operation: ";
  cin >> Opp;
  cout << endl;
  // This grabs the user inputs and turns them into a sring. This makes things for readable below
  equation = to_string(numberOne) + " " + Opp + " " + to_string(numberTwo) + " = ";
  // A switch statement that will do the calculations based on the user inputs
  switch(Opp){
    case '+': 
      cout << equation << numberOne + numberTwo << endl;
      break;
    case '-':
      cout << equation << numberOne - numberTwo << endl;
      break;
    case '*':
      cout << equation << numberOne * numberTwo << endl;
      break;
    case '/':
      // A second switch statement that checks for division by 0
      switch (numberTwo){
        case 0:
          cout << "Undefined" << endl;
          break;
        default:
          cout << equation << numberOne / numberTwo << endl;
          break;
        }
      break;
    default:
      cout << "Invalid operator" << endl;
      break;
  }
  return 0;
}