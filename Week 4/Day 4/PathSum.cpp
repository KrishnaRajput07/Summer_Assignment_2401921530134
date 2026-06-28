#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution {
public:
    bool helper(TreeNode* root, int target){
        if(!root) return false;
        target -= root->val;
        if(!root->left && !root->right) return target == 0;
        return (helper(root->left, target)||helper(root->right,target));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum);
    }
};