#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return 1;
        int i=0;
        int j=1;
        vector<char> ans;
        while(j<=chars.size()){
            if(j == chars.size() || chars[i] != chars[j]) {
                ans.push_back(chars[i]);

                int cnt = j - i;

                if(cnt > 1) {
                    string count = to_string(cnt);
                    for(char c : count) {
                        ans.push_back(c);
                    }
                }

                i = j;
            }
            j++;
        }
        
        chars=ans;
        return ans.size();
    }
};