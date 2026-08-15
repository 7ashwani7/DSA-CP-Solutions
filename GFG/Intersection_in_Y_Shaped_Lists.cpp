#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node* temp1= head1;
        Node* temp2= head2;
        int len1=0;
        while(temp1 !=NULL){
            len1++;
            temp1= temp1->next;
        } 
        int len2=0;
        while(temp2 !=NULL){
            len2++;
            temp2= temp2->next;
        } 
        temp1=head1;
        temp2=head2;
        if(len1>len2){
            int diff=len1-len2;
            for(int i=1; i<=diff; i++){
                temp1=temp1->next;
            }
            while(temp1 != temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
        else{
            int diff=len2-len1;
            for(int i=1; i<=diff; i++){
                temp2=temp2->next;
            }
            while(temp1 != temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
    }
};
int main() {
    return 0;
}