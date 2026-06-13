#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq(26,0);
        for(char c:p){
            freq[c-'a']++;
        }
        vector<int> freq2(26,0);
        int i=0; 
        int j=0;
        vector<int> ans;
        while(j<s.size()){
            freq2[s[j]-'a']++;
            if(j-i+1>p.size()){
                freq2[s[i]-'a']--;
                i++;
            }
            if(j-i+1==p.size() && freq==freq2){
                ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};