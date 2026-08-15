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
        // code here
        unordered_set<int> st;
        while(head2){
            st.insert(head2->data);
            head2 = head2->next;
        }
        Node* ans = new Node(0);
        Node* temp = ans;
        while(head1 != NULL){
            if(st.count(head1->data)){
                temp->next = new Node(head1->data);
                temp = temp->next;
               
            }
            head1 = head1->next;
        }
        return ans->next;
    }
};
int main() {
    return 0;
}