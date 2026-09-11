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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;  
        while (temp && temp->next) {
            int t = __gcd(temp->val, temp->next->val);
            
            ListNode* gcd = new ListNode(t);
            gcd->next = temp->next;
            temp->next = gcd;
            
            temp = gcd->next;
        }
        
        return head;
    }
};
// OR
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        for (ListNode* curr = head; curr && curr->next; curr = curr->next->next) {
            curr->next = new ListNode(__gcd(curr->val, curr->next->val), curr->next);
        }
        return head;
    }
};
int main() {
    return 0;
}