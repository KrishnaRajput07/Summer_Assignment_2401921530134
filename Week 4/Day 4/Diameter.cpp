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
    int d = 0;
    int helper(TreeNode* root){
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        d = max(d, left+right);
        return 1+max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return d;
        int temp = helper(root);
        return d;  
    }
};