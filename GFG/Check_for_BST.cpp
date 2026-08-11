#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    bool check(Node* root, long long lo, long long hi) {
        if(root == NULL) return true;
        if(root->data <= lo || root->data >= hi) return false;
        return check(root->left, lo, root->data) && check(root->right, root->data, hi);
    }
    bool isBST(Node* root) {
        // code here
       return check(root, LLONG_MIN, LLONG_MAX);
    }
};
int main() {
    return 0;
}