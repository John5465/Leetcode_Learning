#include "binary_tree.h"

namespace leetcode {

BinaryTree::BinaryTree() : root_(nullptr) {}

BinaryTree::BinaryTree(const BinaryTree& t) { root_ = Copy(t.root_); }

BinaryTree::~BinaryTree() {}

void BinaryTree::PreOrder() {}

void BinaryTree::InOrder() {}

void BinaryTree::PostOrder() {}

Node* BinaryTree::Copy(Node* root) {
  if (root == nullptr) return nullptr;

  Node* copy_node = new Node(root->val);
  copy_node->left = Copy(root->left);
  copy_node->right = Copy(root->right);

  return copy_node;
}

}  // namespace leetcode