#include "vecfuncs.h"

int main() {
  int min, max;
  vector <int> userNums;
  cout << "Hello World!\n";

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  // task 1: define and call a function that finds the smallest and                     largest values in the vector
  findExtremes(userNums, min, max);
  cout << "min: " << min << " | max: " << max << endl;
  // task 2: convert to the 3 file format
  
}