#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode *prev=NULL, *curr= head, *Next=head;
    while(curr){
        Next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=Next;
    }  
    return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        ListNode* b=reverseList(slow->next);
        ListNode* a=head;
        slow->next= NULL;
        ListNode* c= new ListNode(100);
        ListNode* tempc=c;
        ListNode* tempa=a;
        ListNode* tempb=b;
        while(tempa && tempb){
            tempc->next=tempa;
            tempa=tempa->next;
            tempc=tempc->next;
            tempc->next=tempb;
            tempb= tempb->next;
            tempc=tempc->next;
        }
        tempc->next=tempa;
        head=c->next;
        
    }
};
int main() {
    return 0;
}