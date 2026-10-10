#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	char getMaxOccuringChar(string& s) {
		//  code here
		int freq[26] = {};
		for (char ch : s) freq[ch - 'a']++;
		int mx = 0;
		char ans = 'a';
		for (int i = 0; i < 26; i++) {
			if (freq[i] > mx) {
				mx = freq[i];
				ans = 'a' + i;
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}