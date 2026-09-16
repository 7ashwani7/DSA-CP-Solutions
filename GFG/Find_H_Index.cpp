#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int hIndex(vector<int>& citations) {
		// code here
		int n = citations.size();
		sort(citations.rbegin(), citations.rend());
		int h = 0;
		for (int i = 0; i < n; i++) {
			if (citations[i] >= i + 1) {
				h = i + 1;
			}
			else {
				break;
			}
		}
		return h;
	}
};

int main() {
    return 0;
}