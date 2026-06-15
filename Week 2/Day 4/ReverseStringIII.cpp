#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string d=s;
        d.push_back(' ');
        string ans;
        string sub;
        int j=0;
        for(int i=0; i<d.size(); i++){
            if(d[i]==' '){
                sub=d.substr(j,i-j);
                reverse(sub.begin(),sub.end());
                ans=ans+sub+' ';
                j=i+1;
            }
        }
        ans.pop_back();
        return ans;
    }
};