#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l=0;
        int r=nums.size()-1;
        int i=nums.size()-1;
        while(l<=r){
            int lval=nums[l]*nums[l];
            int rval=nums[r]*nums[r];
            if(lval>rval){
                ans[i--]=lval;
                l++;
            }
            else{
                ans[i--]=rval;
                r--;
            }
        }
        return ans;
    }
};