#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        char ans;
        vector<int> freq(26,0);

        for(int i=0; i<n+1; i++){
            freq[t[i]-'a']++;
        }
        for(int i=0; i<n; i++){
            freq[s[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(freq[i]==1)
              ans= (i+'a');
        }
        return ans;
        
    }
};
int main() {
    return 0;
}