#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int countPairs(vector<int> &arr, int target) {
		// Code Here
		unordered_map<int, int> mp;
		int ans = 0;
		for (int x : arr) {
			int rem = target - x;
			if (mp.find(rem) != mp.end()) {
				ans += mp[rem];
			}
			mp[x]++;
		}
		return ans;
	}
};

int main() {
    return 0;
}