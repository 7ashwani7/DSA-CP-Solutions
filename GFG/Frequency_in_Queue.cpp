#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void enqueue(queue<int> &q, int k) {
        // code here
        q.push(k);
        
    }

    int findFrequency(queue<int> &q, int k) {

        
        //  code here
        int n = q.size();
        int count = 0;
        while(n--){
            int x = q.front();
            q.pop();
            if(x == k) count++;
            q.push(x);
        }
        return count;
    }
};
int main() {
    return 0;
}