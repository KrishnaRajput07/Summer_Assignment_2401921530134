#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+" || tokens[i]=="-"|| tokens[i]=="*"|| tokens[i]=="/" ){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c;
                char ch=tokens[i][0];
                switch(ch){
                    case '+':
                     c=b+a;
                     break;
                    case '-':
                     c=b-a;
                     break;
                    case '*':
                     c=b*a;
                     break;
                    case '/':
                     c=b/a;
                     break;
                }
                st.push(c);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};