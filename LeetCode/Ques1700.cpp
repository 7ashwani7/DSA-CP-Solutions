#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int x : students) {
            q.push(x);
        }
        int i = 0;
        int count = 0;
        while(!q.empty() && count != q.size()){
            if(q.front() == sandwiches[i]){
                count = 0;  // VIMP
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;   // VIMP
            }
        }
        return q.size();
    }
};
int main() {
    return 0;
}