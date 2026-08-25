#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
};

class Solution {
public:
    void inorder(Node* root, vector<int>& temp){
        if (root==NULL) return;
        inorder(root->left, temp);
        temp.push_back(root->data);
        inorder(root->right, temp);
    }
    void postorder(Node* root, vector<int>& temp, int &i) {
        if (root==NULL) return;
        postorder(root->left, temp, i);
        postorder(root->right, temp, i);
        root->data = temp[i++];
    }

    void convertToMaxHeapUtil(Node* root) {
        vector<int> temp;
        inorder(root, temp);
        int i = 0;
        postorder(root, temp, i);
    }
};
int main() {
    return 0;
}