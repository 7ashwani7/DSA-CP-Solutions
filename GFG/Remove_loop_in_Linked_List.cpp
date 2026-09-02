#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class Solution {
  public:
    void removeLoop(Node* head) {
        
        if(head == NULL || head->next == NULL) return;

        Node* slow = head;
        Node* fast = head;

        bool loop = false;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                loop = true;
                break;
            }
        }

        if(!loop) return;

        slow = head;

        if(slow == fast) {
            while(fast->next != slow) {
                fast = fast->next;
            }
            fast->next = NULL;
            return;
        }

            while(slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = NULL;
    }
};
int main() {
    return 0;
}