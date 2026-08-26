#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    void helper(TreeNode* root) {
        if (root == NULL) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};
// shorter version
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
int main() {
    return 0;
}