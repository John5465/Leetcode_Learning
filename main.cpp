#include <iostream>

#include "./Array/PlusOne/plus_one.h"

using namespace std;

int main(int argc, char** argv) {
  leetcode::PlusOne plus_one;

  vector<int> ans = plus_one.Run(plus_one.digits_);

  for (auto num : ans) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}