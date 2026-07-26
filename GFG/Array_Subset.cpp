#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	// Function to check if b is a subset of a
	bool isSubset(vector<int> &a, vector<int> &b) {
		// Your code here
		unordered_map<int, int> mp;
		for (int x : a)
			mp[x]++;
		for (int x : b) {
			if (mp[x] == 0)
				return false;
			mp[x]--;
		}
		return true;
	}
};
int main() {
    return 0;
}
