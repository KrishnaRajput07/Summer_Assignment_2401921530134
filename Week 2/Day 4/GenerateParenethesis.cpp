#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int n,int c,vector<string> &ans,string &level){
        if(n==0){
            int temp = c;
          if(c!=0){
           while(c!=0){
           level.push_back(')');
           c--;
            }
          }
          ans.push_back(level);
          while (temp--) {
                level.pop_back();
            }
          return;
        }
        if(level.empty()){
            level.push_back('(');
            helper(n-1,c,ans,level);
        }
        else{
           level.push_back('(');
           helper(n-1,c,ans,level);
           level.pop_back();
           if(c>n){
            level.push_back(')');
           helper(n,c-1,ans,level);
           level.pop_back();
           }
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string level="";
        helper(n,n,ans,level);
        return ans;
    }
};