#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int mi = INT_MAX;

        for(int i = 0; i < n; i++){
            if(words[i] == target){
                int dist = abs(i - startIndex);
                mi = min(mi, min(dist, n - dist));
            }
        }

        return (mi == INT_MAX) ? -1 : mi;
    }
};
int main() {
    return 0;
}