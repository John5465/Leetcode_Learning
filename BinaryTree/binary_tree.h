#ifndef BINARY_TREE_H
#define BINARY_TREE_H

namespace leetcode {

struct BinaryTreeNode {
  int val;
  BinaryTreeNode* left;
  BinaryTreeNode* right;

  BinaryTreeNode(const int& val = 0)
      : val(val), left(nullptr), right(nullptr) {}
};

typedef BinaryTreeNode Node;

class BinaryTree {
 public:
  BinaryTree();

  BinaryTree(const BinaryTree& t);

  ~BinaryTree();

  void PreOrder();

  void InOrder();

  void PostOrder();

 private:
  Node* Copy(Node* root);

 private:
  Node* root_;
};

}  // namespace leetcode

#endif