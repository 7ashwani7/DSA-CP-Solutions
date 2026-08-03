#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL) return NULL;
        if(x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node* temp = head;
            for(int i = 1; i < x-1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL) return head;
        
        Node* delNode = temp->next;
        temp->next = delNode->next;
        
        delete delNode;
        
        return head;
    }
};
int main() {
    return 0;
}