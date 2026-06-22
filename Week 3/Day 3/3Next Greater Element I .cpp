#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> nge;
        vector<int> ans(nums1.size());

        for(int i=nums2.size()-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
            }
            if(st.empty()){
                    st.push(nums2[i]);
                    nge[nums2[i]]=-1;
            }
            else{
                    nge[nums2[i]]=st.top();
                    st.push(nums2[i]);
            }
        }  

     for(int i=0; i<nums1.size(); i++){
        ans[i]=nge[nums1[i]];
     }
     return ans;
    }
};