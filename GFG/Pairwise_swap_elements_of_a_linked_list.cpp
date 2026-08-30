#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
        if(head == NULL || head->next == NULL)
            return head;

        Node* prev = NULL;
        Node* curr = head;
        head = head->next;
        while(curr && curr->next){

            Node* nextPair = curr->next->next;
            Node* second = curr->next;

            second->next = curr;
            curr->next = nextPair;

            if(prev != NULL)
                prev->next = second;
                
            prev = curr;
            curr = nextPair;
        }

        return head;
    }
};
int main() {
    return 0;
}