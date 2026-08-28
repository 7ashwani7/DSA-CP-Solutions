#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node() {}

    Node(int _val, Node* _prev, Node* _next, Node* _child) {
        val = _val;
        prev = _prev;
        next = _next;
        child = _child;
    }
};
class Solution {
public:
    Node* flatten(Node* head) {
    Node* temp=head;
    while(temp){
        Node* a=temp->next;
        if(temp->child){
            Node* c=temp->child;
            temp->child=NULL;
            c=flatten(c);
            temp->next=c;
            c->prev=temp;
            while(c->next) c=c->next;
            c->next=a;
            if(a) a->prev=c;
        }
        temp=a;
    }
    return head;        
    }
};
int main() {
    return 0;
}