#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool isIsogram(string& s) {
		//  code here
		int freq[26] = {0};
		for (char ch : s) {
			freq[ch - 'a']++;
			if (freq[ch - 'a'] > 1) {
				return false;
			}
		}
		return true;
	}
};

int main() {
    return 0;
}