#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	string firstRepChar(string s) {
		// code here.
		vector<int> freq(26, 0);
		for (char ch : s) {
			freq[ch - 'a']++;
			if (freq[ch - 'a'] == 2) {
				return string(1, ch);
			}
		}
		return "-1";
	}
};

int main() {
    return 0;
}