#include <iostream>

#include "remove_element.h"

using namespace std;

int main(int argc, char** argv) {
  leetcode::RemoveElement remove_element;
  int ret = remove_element.Run(remove_element.nums_, remove_element.val_);

  cout << ret << endl;

  for (int i = 0; i < ret; ++i) {
    cout << remove_element.nums_[i] << " ";
  }

  return 0;
}