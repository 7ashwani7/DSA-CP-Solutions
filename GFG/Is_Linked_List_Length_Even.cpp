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
    bool isEven(struct Node **head) {
        int count = 0;

        Node* temp = *head;

        while(temp){
            count++;
            temp = temp->next;
        }

        return (count % 2 == 0);
    }
};
int main() {
    return 0;
}