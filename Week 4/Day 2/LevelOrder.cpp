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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // root
        // return lvl order traveral

        vector<vector<int>> ans;
        vector<int> lvl;
        queue<TreeNode*> q;

        if(!root) return ans;

        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* temp = q.front();
            if(temp) lvl.push_back(temp->val);
            q.pop();
            if(!temp){
                ans.push_back(lvl);
                if(!q.empty()){
                    lvl.clear();
                    q.push(NULL);
                }
            }
            else{
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};