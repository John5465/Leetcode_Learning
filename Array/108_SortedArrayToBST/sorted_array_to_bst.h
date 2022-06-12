#ifndef SORTED_ARRAY_TO_BST_H
#define SORTED_ARRAY_TO_BST_H

namespace leetcode {

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class SortedArrayToBst {};

}  // namespace leetcode

#endif