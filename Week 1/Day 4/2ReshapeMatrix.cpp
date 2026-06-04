#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> dummy;
        vector<vector<int>> ans(r,vector<int>(c,0));
        if (m*n!=r*c){
            return mat;
        }
        for (int i=0; i<m*n; i++) {
            ans[i/c][i%c] = mat[i/n][i%n];
        }
        return ans;
    }
};