#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto els:strs){
            string key=els;
            sort(key.begin(),key.end());
            mp[key].push_back(els);
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};