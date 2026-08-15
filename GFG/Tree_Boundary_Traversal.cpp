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
    bool isLeaf(Node* root) {
    return root && root->left == NULL && root->right == NULL;
    }

    void leftBoundary(Node* root, vector<int>& ans) {
        if (root == NULL || isLeaf(root)) return;
        ans.push_back(root->data);
        if (root->left) leftBoundary(root->left, ans);
        else leftBoundary(root->right, ans);
    }
    void leafNodes(Node* root, vector<int>& ans) {
        if (root == NULL) return;
        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
    }
    void rightBoundary(Node* root, vector<int>& ans) {
        if (root == NULL || isLeaf(root)) return;
        if (root->right) rightBoundary(root->right, ans);
        else rightBoundary(root->left, ans);
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if (root == NULL) return ans;
        ans.push_back(root->data);
        leftBoundary(root->left, ans);
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
        rightBoundary(root->right, ans);
        return ans;
    }
};
int main() {
    return 0;
}