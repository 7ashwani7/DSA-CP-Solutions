
#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class Solution {
public:

    Node* reverseList(Node* head){

        Node* prev = NULL;
        Node* curr = head;

        while(curr){

            Node* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    Node* removeLeadingZeros(Node* head){

        while(head && head->data == 0 && head->next){
            head = head->next;
        }

        return head;
    }

    Node* addTwoLists(Node* l1, Node* l2) {

        l1 = removeLeadingZeros(l1);
        l2 = removeLeadingZeros(l2);

        l1 = reverseList(l1);
        l2 = reverseList(l2);

        Node dummy(0);
        Node* temp = &dummy;

        int carry = 0;

        while(l1 || l2 || carry){

            int sum = carry;

            if(l1){
                sum += l1->data;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->data;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new Node(sum % 10);

            temp = temp->next;
        }

        return reverseList(dummy.next);
    }
};
int main() {
    return 0;
}