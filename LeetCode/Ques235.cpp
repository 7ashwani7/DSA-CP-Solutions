#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root){
            if(root->val < p->val && root->val < q->val) root = root->right;
            else if(root->val > p->val && root->val > q->val) root = root->left;
            else return root;
        }
        return NULL;
    }
};
// OR 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        else if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        else return root;
    }
};
int main() {
    return 0;
}