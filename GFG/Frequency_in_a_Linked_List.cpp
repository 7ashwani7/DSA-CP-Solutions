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
    int count(Node* head, int key) {
        int count = 0;
        while (head != NULL) {
            if (head->data == key) count++;
            head = head->next;
        }
        return count;
    }
};
int main() {
    return 0;
}