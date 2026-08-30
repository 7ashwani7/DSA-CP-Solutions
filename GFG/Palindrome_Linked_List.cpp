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
      Node* reverseList(Node* head) {
      Node *prev=NULL, *curr= head, *Next=head;
      while(curr){
        Next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=Next;
      }  
      return prev;
    }
    bool isPalindrome(Node* head) {
        Node* slow= head;
        Node* fast= head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        Node* newHead=reverseList(slow->next);
        Node* a=head;
        Node* b= newHead;
        while(b){
            if(a->data!=b->data) return false;
            a= a->next;
            b= b->next;
        }
        return  true;
    }
};
int main() {
    return 0;
}