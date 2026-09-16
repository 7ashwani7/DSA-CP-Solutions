#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int maxLen(vector<int> &arr) {
		// Your code here
		int n = arr.size();
		unordered_map<int, int> mp;
		int sum = 0;
		int ans = 0;
		mp[0] = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				sum--;
			}
			else {
				sum++;
			}
			if (mp.count(sum)) {
				ans = max(ans, i - mp[sum]);
			}
			else {
				mp[sum] = i;
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}