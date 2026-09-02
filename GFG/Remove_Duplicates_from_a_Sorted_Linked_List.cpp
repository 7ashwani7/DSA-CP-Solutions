#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL) return head;
        Node* temp = head;
        while(temp != NULL && temp->next != NULL){
            
            if(temp->data == temp->next->data){
                Node* duplicate = temp->next;
                temp->next = temp->next->next;
                
                delete duplicate;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
// OR
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        
        if(head == NULL) return head;
        for(Node* temp = head; temp != NULL && temp->next != NULL; ) {
            
            (temp->data == temp->next->data) ? temp->next = temp->next->next : temp = temp->next;        
        }
        return head;
    }
};
int main() {
    return 0;
}