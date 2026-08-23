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
    int ans = 0;
    int level(Node* root){
        if(root == NULL) return 0;
        int left = level(root->left);
        int right = level(root->right);
        ans = max(ans, left + right);
        return 1 + max(left, right);
    }
    int diameter(Node* root) {
        // code here
        level(root);
        return ans;
    }
};
int main() {
    return 0;
}