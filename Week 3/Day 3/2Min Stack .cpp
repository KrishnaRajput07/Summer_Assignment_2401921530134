#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<long long> s;
    long long mini;
public:
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int v) {
        long long val=v;
        if(s.empty()){
            mini=val;
            s.push(val);
        }
        else{
            if(val>=mini){
                s.push(val);
            }
            else{
                long long new_val=2*val-mini;
                mini=val;
                s.push(new_val);
            }
        }
    }
    
    void pop() {
        if(s.empty()){
            return;
        }
        else{
            if(s.top()<mini){
                mini=2*mini-s.top();
            }
            s.pop();
        }
    }
    
    int top() {
        if (s.empty()) return -1;
        if(s.top()<mini){
            return (int)mini;
        }
        else return (int)s.top();
    }
    
    int getMin() {
        return (int)mini;
    }
};
