#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void mergeArrays(vector<int>& a, vector<int>& b) {
		// code here
		int n = a.size();
		int m = b.size();
		int len = n + m;
		for (int gap = (len + 1) / 2; gap > 0; gap = (gap + 1) / 2) {
			int i = 0;
			int j = gap;
			while (j < len) {
				if (i < n && j < n) {
					if (a[i] > a[j]) swap(a[i], a[j]);
				}
				else if (i < n && j >= n) {
					if (a[i] > b[j - n]) swap(a[i], b[j - n]);
				}
				else {
					if (b[i - n] > b[j - n]) swap(b[i - n], b[j - n]);
				}
				i++;
				j++;
			}
			if (gap == 1) break;
		}
	}
};

int main() {
    return 0;
}