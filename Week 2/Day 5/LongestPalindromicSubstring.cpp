#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool palindrome(string &s, int left, int right){//& s so that no copy is take again again decreasing memory usage through refrencing 
        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s;
        }
        int maxlen=1;
        string maxi=s.substr(0,1);
        for(int i=0; i<s.size(); i++){
            for(int j=i+maxlen; j<s.size(); j++){
                if(palindrome(s,i,j)){
                    maxlen=max(maxlen,j-i+1);
                    if(maxlen>maxi.length()){
                   maxi=s.substr(i,j-i+1);// remember second parameter is length not index
                }
                }
            }
        }
        return maxi;
    }
};