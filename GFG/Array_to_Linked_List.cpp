#include <bits/stdc++.h>
using namespace std;
// Representation of a node//
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(arr.empty()) return NULL;
        
        Node* head = new Node(arr[0]);
        Node* tail = head;
        
        for(int i = 1; i < n; i++) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        
        return head;
        
    }
};
int main() {
    return 0;
}