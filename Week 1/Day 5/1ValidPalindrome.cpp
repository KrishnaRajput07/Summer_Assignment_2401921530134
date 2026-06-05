#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
     transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ 
        return tolower(c); 
     }); //lamda fun

     s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
     int l=0;
     int r=s.size()-1;
     while(l<=r){
       if(s[l]!=s[r]) return false;
       l++;
       r--;
     }
     return true;
    }
};