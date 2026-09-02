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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head ->next;
    //     while (fast != nullptr && fast->next != nullptr) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    //  }
        if(head==NULL || head->next==NULL)
        return head;
        else{
        while(fast != NULL){
            fast= fast->next;
            if(fast != NULL)
            fast= fast->next;
            slow=slow->next;
        }
        return slow;
    }
};
int main() {
    return 0;
}