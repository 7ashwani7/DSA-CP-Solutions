#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
      Node *prev=NULL, *curr= head, *Next=head;
      while(curr){
        Next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=Next;
      }  
      return prev;
    }
};
int main() {
    return 0;
}