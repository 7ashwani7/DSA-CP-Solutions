#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> freq(128, 0);
        
        for(char j : jewels){
            freq[j] = 1;
        }
        int count = 0;
        for(char s : stones){
            if(freq[s]) count++;
        }
        
        return count;
        
    }
};
//OR
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       unordered_set<char> st(jewels.begin(), jewels.end());
        
        int count = 0;
        for(char s : stones){
            if(st.count(s)) count++;
        }
        
        return count;
        
    }
};
int main() {
    return 0;
}