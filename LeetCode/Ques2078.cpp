#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i = 0;
        while(colors[i] == colors[n-1]) i++;

        int j = n-1;
        while(colors[j] == colors[0]) j--;

        return max(n-1-i, j);
        
    }
};
// OR
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(colors[i] != colors[n-1]){
                ans = max(ans, n-1 - i);
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(colors[i] != colors[0]){
                ans = max(ans, i);
            }
        }

        return ans;
        
    }
};
int main() {
    return 0;
}