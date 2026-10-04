#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    vector<Node*> mp;
    void dfs(Node* cur, Node* copy){
        for(auto nxt : cur->neighbors){
            if(!mp[nxt->val]){
                Node* node = new Node(nxt->val);
                mp[node->val] = node;
                copy->neighbors.push_back(node);
                dfs(nxt, node);
            }
            else {
                copy->neighbors.push_back(mp[nxt->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        Node* copy = new Node(node->val);
        mp.resize(110, NULL);
        mp[copy->val] = copy;
        dfs(node, copy);
        return copy;
    }
};
// OR 
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        unordered_map<Node*, Node*> mp;
        queue<Node*> q;
        q.push(node);
        mp[node] = new Node(node->val);
        while(!q.empty()){
            Node* cur = q.front();
            q.pop();
            for(auto nxt : cur->neighbors){
                if(!mp.count(nxt)){
                    mp[nxt] = new Node(nxt->val);
                    q.push(nxt);
                }
                mp[cur]->neighbors.push_back(mp[nxt]);
            }
        }
        return mp[node];
    }
};
int main() {
    return 0;
}