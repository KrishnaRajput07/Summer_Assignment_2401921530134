#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nse(n);
        vector<int> pse(n);
        stack<int> st;
        if(n==1){
           return heights[0];
        }
        if(n==0){
            return 0;
        }
        //nse
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                st.pop();
            }
            nse[i]=st.empty() ? n :st.top();
            st.push(i);
        }

        //emptying the stack
        while(!st.empty()){
            st.pop();
        }

        //pse
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            pse[i]=st.empty() ? -1 :st.top();
            st.push(i);
        }
        int area=0;
        for(int i=0; i<n; i++){
            int width=nse[i]-pse[i]-1;
            area=max(width*heights[i],area);  
        }
        return area;
    }
};