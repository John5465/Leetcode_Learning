#include <iostream>

#include "BinaryTree/binary_tree.h"

using namespace std;

int main(int argc, char** argv) {
  vector<int> array = {0, 1, 2};

  leetcode::BinaryTree binary_tree;

  binary_tree.root_ = binary_tree.ArrayToBinaryTree(array);

  binary_tree.PostOrder(binary_tree.root_);

  return 0;
}