#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* slow= head;
        Node* fast= head;
        while(k--){
            if(fast == NULL) return -1;
            fast = fast->next;
        }
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;

        }
        return slow->data;
    }
};
int main() {
    return 0;
}