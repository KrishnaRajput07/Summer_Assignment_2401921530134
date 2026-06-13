#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int maxArea = 0;
        
        while (i < j) {
           
            int currentHeight = min(height[i], height[j]);
            int currentWidth = j - i;
            int currentArea = currentHeight * currentWidth;
        
            maxArea = max(maxArea, currentArea);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        
        return maxArea;
    }
};

