#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> inStack, outStack;
public:
    MyQueue() {
       
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
     if(outStack.empty()){
        while(inStack.size()){
                outStack.push(inStack.top());
                inStack.pop();
        }
     }
     int val=outStack.top();
     outStack.pop();

     return val;
    }
    
    int peek() {
        if(outStack.empty()){
        while(inStack.size()){
                outStack.push(inStack.top());
                inStack.pop();
        }
     }
    return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
