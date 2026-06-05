#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        //given we have to find prefix so first not match we will stop comparing and also we should compare this with smallest string to reduce tc
         int shortylen=strs[0].size();
         string shortystr=strs[0];
        for(string els :strs){
          if(els.size()<shortylen){
            shortylen=els.size();
            shortystr=els;
          }
        }

        for(int i=0; i<shortylen; i++){
            char c=shortystr[i];
            for(int j=0; j<strs.size(); j++){
                if(c!=strs[j][i]){
                    return shortystr.substr(0,i);
                }
            }
        }
        return shortystr; 
    }
};