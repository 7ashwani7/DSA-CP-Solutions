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
      ListNode *prev=NULL, *curr= head, *Next=head;
      while(curr){
        Next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=Next;
      }  
      return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode* sumList = new ListNode(0);
        ListNode* temp = sumList;

        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry) {

            int sum = carry;
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return reverseList(sumList->next);
        
    }
};
int main() {
    return 0;
}