#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
  
    Node* merge(Node* a, Node* b) {
        Node* dummy = new Node(0);
        Node* temp = dummy;
        while (a != NULL && b != NULL) {
            if (a->data <= b->data) {
                temp->next = a;
                a = a->next;
            } 
            else {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        if (a != NULL) temp->next = a;
        else temp->next = b;
        return dummy->next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        if (arr.empty()) return NULL;
        while (arr.size() > 1) {
            Node* a = arr[0];
            arr.erase(arr.begin());
            Node* b = arr[0];
            arr.erase(arr.begin());

            Node* c = merge(a, b);
            arr.push_back(c);
        }
        return arr[0];
    }
};
int main() {
    return 0;
}