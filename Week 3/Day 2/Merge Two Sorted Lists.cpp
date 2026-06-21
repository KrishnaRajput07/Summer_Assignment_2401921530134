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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        ListNode *i=list1;
        ListNode *j=list2;
        while(i&&j){
            if(i->val<j->val){
                tail->next=i;
                i=i->next;
            }
            else{
                tail->next = j;
                j=j->next;
            }
             tail=tail->next;
        }
        if(i){
            tail->next=i;
        }
        if(j){
            tail->next=j;
        }
        return dummy.next;
    }
};