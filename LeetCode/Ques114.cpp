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
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        flatten(root->left);
        flatten(root->right);

        TreeNode* r = root->right;
        root->right = root->left;
        root->left = NULL;   // IMPORTANT
        TreeNode* temp = root;
        while(temp->right != NULL) temp = temp->right;
        temp->right = r;
    }
};
// OR 
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        TreeNode* curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                TreeNode* r = curr->right;
                curr->right = curr->left;
                TreeNode* pred = curr->left;
                while(pred->right != NULL) pred = pred->right;
                pred->right = r;
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        TreeNode* temp = root;
        while (temp->right != NULL) {
            temp->left = NULL;
            temp = temp->right;
        }
    }
};
int main() {
    return 0;
}