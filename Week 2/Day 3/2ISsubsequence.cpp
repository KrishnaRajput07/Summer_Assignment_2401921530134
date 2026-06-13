#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int r=0;//moving in s
        int l=0;//moving in t
        if(s.size()==0) return true;
        while(l<t.size()){
            if(r==s.size()-1 && s[r]==t[l]){
                return true;
            }
            if(r<s.size() && s[r]==t[l]){
                r++;
            }
            l++;
        }
        return false;
    }
};