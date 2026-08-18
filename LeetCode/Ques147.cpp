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
    void insert(ListNode*& sorted, ListNode* node) {
        if (!sorted || node->val < sorted->val) {
            node->next = sorted;
            sorted = node;
            return;
        }
        ListNode* curr = sorted;
        while (curr->next && curr->next->val < node->val) {
            curr = curr->next;
        }
        node->next = curr->next;
        curr->next = node;
    }
    ListNode* insertionSortList(ListNode* head) {
        ListNode* sorted = NULL;
        while (head) {
            ListNode* next = head->next;
            insert(sorted, head);
            head = next;
        }
        return sorted;
    }
};
// OR
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        temp = head;
        int i = 0;
        while (temp) {
            temp->val = v[i++];
            temp = temp->next;
        }
        return head;
    }
};
int main() {
    return 0;
}