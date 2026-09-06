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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        head = head->next;

        int sum = 0;
        while(head){
            if(head->val == 0){
                temp->next = new ListNode(sum);
                temp = temp->next;
                sum = 0;
            }
            else{
                sum += head->val;
            }
            head = head->next;
        }
        return dummy->next;
    }
};
\\ OR
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum =0;
        head=head->next;
        ListNode *prev = head;
        ListNode *curr = head->next;
        while(curr){
            if(curr->val != 0){
                prev->val+=curr->val;
                curr=curr->next;
            }else{
                prev->next=curr->next;
                prev = prev->next;
                if(curr->next){
                    curr=curr->next->next;
                }else{
                    curr=NULL;
                }
            }
        }
        return head;
    }
};
int main() {
    return 0;
}