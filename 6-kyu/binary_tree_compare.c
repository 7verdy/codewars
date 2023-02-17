// https://www.codewars.com/kata/55847fcd3e7dadc9f800005f

#include <stdbool.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
} TreeNode;

bool equal_trees (const TreeNode *a, const TreeNode *b)
{
  if (!a && !b) return true;
  if (!a || !b) return false;
  return a->val == b->val && equal_trees(a->left, b->left) && equal_trees(a->right, b->right);
}