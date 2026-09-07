#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m,vector<int>(n,-1));
        int minr=0, minc=0, maxr=m-1, maxc=n-1;
        int tne= n*m, count=0;
        ListNode* temp= head;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc; j<=maxc ;j++){
                if(temp==NULL) return arr;
                 arr[minr][j]= temp->val;
                 temp= temp->next;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr; i<=maxr; i++){
              if(temp==NULL) return arr;
                 arr[i][maxc]= temp->val;
                 temp= temp->next; 
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc; j>=minc; j--){
              if(temp==NULL) return arr;
                 arr[maxr][j]= temp->val;
                 temp= temp->next; 
            }
            maxr--;
             if(minr>maxr || minc>maxc) break;
             for(int i=maxr; i>=minr; i--){
              if(temp==NULL) return arr;
                 arr[i][minc]= temp->val;
                 temp= temp->next;
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
        }
        return arr;

    }
};
int main() {
    return 0;
}