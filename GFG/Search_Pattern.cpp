#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> search(string &pat, string &txt) {
		// code here
		int n = txt.size();
		int m = pat.size();
		vector<int> lps(m, 0);
		vector<int> ans;
		for (int i = 1, j = 0; i < m;) {
			if (pat[i] == pat[j]) {
				lps[i] = j + 1;
				i++;
				j++;
			}
			else if (j > 0) {
				j = lps[j - 1];
			}
			else {
				i++;
			}
		}
		
		// KMP Search
		for (int i = 0, j = 0; i < n;) {
			if (txt[i] == pat[j]) {
				i++;
				j++;
			}
			if (j == m) {
				ans.push_back(i - m);
				j = lps[j - 1];
			}
			else if (i < n && txt[i] != pat[j]) {
				if (j > 0) j = lps[j - 1];
				else i++;
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}