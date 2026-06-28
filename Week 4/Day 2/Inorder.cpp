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
    void solve(TreeNode* root, vector<int> &arr){
        if(!root) return;
        solve(root->left, arr);
        arr.push_back(root->val);
        solve(root->right, arr);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        solve(root, arr);
        return arr;
    }
};