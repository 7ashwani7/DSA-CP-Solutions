#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        if (head == NULL) return head;
        unordered_set<int> s;
        Node* curr = head;
        Node* prev = NULL;
        while (curr) {
            if (s.find(curr->data) != s.end()) {
                prev->next = curr->next;
            } 
            else {
                s.insert(curr->data);
                prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};
int main() {
    return 0;
}