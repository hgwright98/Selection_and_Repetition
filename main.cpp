#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Start of the main function
int main() {
  // This reads my input files
  ifstream inputFile("file1.txt");
  ifstream inputFile2("file2.txt");
  // This is a variable I will need below to get each line of the files
  string name;
  // This is a vector I will need to store the names and we state that each entry is a string
  vector<string> names;
  // These while statements will read each line of the files and store them in the vector and the .push_back adds each entry to the vector
  while(getline(inputFile, name)) {
    names.push_back(name);
  }
  while(getline(inputFile2, name)) {
    names.push_back(name);
  }
  // This closes the files being read as we do not need them anymore
  inputFile.close();
  inputFile2.close();
  // This sorts the vector in alphabetical order and creates an output file for which it will print each name on
  sort(names.begin(), names.end());
  ofstream outputFile("output.txt");
  // This for loop reads each value in the vector names as a string and prints it to the output file until it is done
  for (string i : names) {
    outputFile << i << endl;
  }
  outputFile.close();
  return 0;
}