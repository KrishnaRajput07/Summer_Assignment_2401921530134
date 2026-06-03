#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=0 && i<n-1){
              i++;
            }
            if(nums[j]==0 && j<n-1){
                j++;
            }
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
        
    }
};