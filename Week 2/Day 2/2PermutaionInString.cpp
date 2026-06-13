#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> freq2(26,0);
        for(char c:s1){
            freq[c-'a']++;
        }
        int i=0;
        int j=0;
        while(j<s2.size()){
             freq2[s2[j]-'a']++;
             if(j-i+1>s1.size()){
                 freq2[s2[i]-'a']--;
                i++;
             }
             if(j-i+1==s1.size() && freq==freq2) return true;
            j++;
        }
        return false;
    }
};