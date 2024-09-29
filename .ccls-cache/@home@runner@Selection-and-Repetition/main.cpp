#include <iostream>
#include <string>
using namespace std;

int main() {
  int numberOne;
  int numberTwo;
  string Opp;
  string equation;

  cout << "Please input your first integer: ";
  cin >> numberOne;
  cout << "Please input your second integer: ";
  cin >> numberTwo;
  cout << "Please input your operation: ";
  cin >> Opp;
  cout << "";

  equation = to_string(numberOne) + " " + Opp + " " + to_string(numberTwo) + " = ";

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