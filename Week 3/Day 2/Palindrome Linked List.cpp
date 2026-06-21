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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
      ListNode* newhead= reverse(head->next);
      ListNode* front=head->next;
      front->next=head;
      head->next=NULL;
      return newhead;

    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){//first for odd and second for even 
             fast=fast->next->next;
             slow=slow->next;
        }
        //now slow is at last node of first chain so the next chain to revsers will be at slow->next
        ListNode* start2=reverse(slow->next);
        ListNode* start1=head;
        while(start2!=NULL){
            if(start1->val!=start2->val){
                reverse(start2);
                return false;
            }
            start1=start1->next;
            start2=start2->next;
        }
        reverse(start2);
        return true;
    }
};