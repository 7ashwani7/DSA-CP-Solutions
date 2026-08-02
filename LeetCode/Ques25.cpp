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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1) return head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* newHead = NULL;
        while (temp != NULL) {
            ListNode* check = temp;
            int count = 0;
            while (check != NULL && count < k) {
                check = check->next;
                count++;
            }
            if (count < k) {
                if (prev != NULL) prev->next = temp;
                else newHead = head;
                break;
            }
            ListNode* groupHead = temp;
            ListNode* p = NULL;
            count = 0;
            while (temp != NULL && count < k) {
                ListNode* nxt = temp->next;
                temp->next = p;
                p = temp;
                temp = nxt;
                count++;
            }
            if (newHead == NULL) newHead = p;
            if (prev != NULL) prev->next = p;
            prev = groupHead;
        }
        return newHead;
    }
};
int main() {
    return 0;
}