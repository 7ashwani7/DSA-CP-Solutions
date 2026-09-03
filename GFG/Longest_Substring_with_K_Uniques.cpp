#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int longestKSubstr(string &s, int k) {
		// code here
		int n = s.size();
		vector<int> freq(26, 0);
		
		int l = 0;
		int count = 0;
		int ans = -1;
		
		for(int r = 0; r < n; r++){
			freq[s[r] - 'a']++;
			if(freq[s[r] - 'a'] == 1) count++;
			while(count > k){
				freq[s[l] - 'a']--;
				if(freq[s[l] - 'a'] == 0) count--;
				l++;
			}
			if(count == k) ans = max(ans, r - l + 1);
		}
		return ans;
	}
};

int main() {
    return 0;
}