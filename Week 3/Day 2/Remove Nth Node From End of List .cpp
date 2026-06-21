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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        int len=0,count=1;
        int pos;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            len+=1;
        }
        pos=len-n+1;
        temp=head;
        if (pos == 1) {
        temp = head;
        head = head->next;
        
        return head;
    }
        while(temp->next!=NULL && count!=pos-1){
            temp=temp->next;
            count+=1;

        }
        if (temp->next == NULL)
        return NULL;

      ListNode* delNode = temp->next;
      temp->next = delNode->next;
     
        return head;
    }
};