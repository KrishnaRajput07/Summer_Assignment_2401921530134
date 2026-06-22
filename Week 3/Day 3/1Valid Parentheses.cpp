#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int size=s.size();
        for(int i=0; i<size; i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else{
                    char ch=st.top(); st.pop();
                    if((s[i]==')'&& ch=='(') || (s[i]=='}'&& ch=='{') || (s[i]==']'&& ch=='[')){
                        
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};