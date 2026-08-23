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
    int height(Node* root){
        if(root == NULL) return 0;
        
        int left = height(root->left);
        if(left == -1) return -1;

        int right = height(root->right);
        if(right == -1) return -1;

        if(abs(left - right) > 1) return -1;

        return 1 + max(left, right);
    }
    bool isBalanced(Node* root) {
        // code here
        return height(root) != -1;

    }
};
int main() {
    return 0;
}