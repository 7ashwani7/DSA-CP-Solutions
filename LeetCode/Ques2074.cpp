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
    
    ListNode* reverseList(ListNode* head){
        ListNode *prev=NULL, *curr=head, *Next=NULL;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *a=NULL, *b=NULL, *c=NULL, *d=NULL;
        int n = 1;
        ListNode* temp = head;
        while(temp){
            if(n==left-1) a=temp;
            if(n==left)   b=temp;
            if(n==right)  c=temp;
            if(n==right+1) d=temp;
            temp=temp->next;
            n++;
        }
        if(a) a->next = NULL;
        c->next = NULL;
        c = reverseList(b);
        if(a) a->next = c;
        b->next = d;
        if(a) return head;
        return c;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;

        while(temp && temp->next){
            ListNode* start = temp->next;
            ListNode* t = start;
            int remLen = 0;
            while(t && remLen < gap+1){
                t = t->next;
                remLen++;
            }
            if(remLen % 2 == 0){
                temp->next = reverseBetween(start,1,remLen);
            }
            for(int i=0;i<remLen && temp;i++){
                temp = temp->next;
            }
            gap++;
        }
        return head;
    }
};
int main() {
    return 0;
}