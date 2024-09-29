#include <iostream>
#include <string>
using namespace std;
// Start of the main function
int main() {
  // establishing all of the variables I will need
  int numberOne;
  int numberTwo;
  string Opp;
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
  // This is the if/else if statement that will do the calculations
  if (Opp == "+"){
    cout << equation << numberOne + numberTwo << endl;} 
  else if (Opp == "-") {
    cout << equation << numberOne - numberTwo << endl;} 
  else if (Opp == "*") {
    cout << equation << numberOne * numberTwo << endl;} 
  else if (Opp == "/" && numberTwo != 0) {
    cout << equation << numberOne / numberTwo << endl;} 
  else if (Opp == "/" && numberTwo == 0) {
    cout << "Undefined" << endl;} 
  else {
    cout << "Invalid operator" << endl;}

  return 0;
}