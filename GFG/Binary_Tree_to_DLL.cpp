#include <bits/stdc++.h>
using namespace std;
/* Structure for tree and linked list */
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};


// This function should return head to the DLL
class Solution {
  public:
    Node* prev = NULL;
    Node* head = NULL;

    void inorder(Node* root) {
        if (root == NULL) return;
        inorder(root->left);
        if(prev == NULL) head = root;
        else {
            prev->right = root;
            root->left = prev;
        }
        prev = root;
        inorder(root->right);
    }
    Node* bToDLL(Node* root) {
        prev = NULL;
        head = NULL;

        inorder(root);
        return head;
    }
};
int main() {
    return 0;
}