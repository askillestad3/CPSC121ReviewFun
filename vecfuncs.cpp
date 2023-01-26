#include "vecfuncs.h"

void fillVector(vector<int>& vec) {
  int num;
  for (int i=0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num);
  }
}

void findExtremes(vector<int>& vec, int& min, int& max) {
  // assumes that vec has at least one element
  min = max = vec.at(0);
  for (int i=0; i < vec.size(); i++) {
    if (vec.at(i) < min) {
      // new min
      min = vec.at(i);
    }
    if (vec.at(i) > max) {
      // new max
      max = vec.at(i);
    }
  }
}