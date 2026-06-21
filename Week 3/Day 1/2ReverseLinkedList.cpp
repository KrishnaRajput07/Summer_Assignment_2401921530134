#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* nextNode,*curr,*prev;
        prev=0;
        curr=nextNode=head;
        while(nextNode!=NULL){
             nextNode=nextNode->next;
             curr->next=prev;
             prev=curr;
             curr=nextNode;   
        }
        head=prev;
      return head;
    }
};