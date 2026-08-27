#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long MOD = 1e9 + 7;

    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long a = 0, b = 0;
        while (first) {
            a = (a * 10 + first->data) % MOD;
            first = first->next;
        }
        while (second) {
            b = (b * 10 + second->data) % MOD;
            second = second->next;
        }
        return (a * b) % MOD;
    }
};
int main() {
    return 0;
}