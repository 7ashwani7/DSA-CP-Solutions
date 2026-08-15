#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* ans = new Node(0);
        Node* temp = ans;
        while(head1 != NULL && head2 != NULL){
            if(head1->data < head2->data){
                head1 = head1->next;
            }
            else if(head1->data > head2->data){
                head2 = head2->next;
            }
            else{
                temp->next = new Node(head1->data);
                temp = temp->next;
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        return ans->next;
    }
};
int main() {
    return 0;
}