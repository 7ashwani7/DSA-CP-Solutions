#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool isPossible(vector<int>& arr, int k, int mid) {
		int cows = 1;
		int last = arr[0];
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] - last >= mid) {
				cows++;
				last = arr[i];
				if (cows == k) {
					return true;
				}
			}
		}
		return false;
	}
	
	int aggressiveCows(vector<int>& arr, int k) {
		// code here
		sort(arr.begin(), arr.end());
		int low = 1;
		int high = arr.back() - arr.front();
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (isPossible(arr, k, mid)) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		return high;
	}
};

int main() {
    return 0;
}