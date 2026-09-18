#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void nextPermutation(vector<int>& arr) {
		// code here
		int n = arr.size();
		int idx = -1;
		for (int i = n - 2; i >= 0; i--) {
			if (arr[i] < arr[i + 1]) {
				idx = i;
				break;
			}
		}
		if (idx == -1) {
			reverse(arr.begin(), arr.end());
			return;
		}
		reverse(arr.begin() + idx + 1, arr.end());
		int j = -1;
		for (int i = idx + 1; i < n; i++) {
			if (arr[i] > arr[idx]) {
				j = i;
				break;
			}
		}
		swap(arr[idx], arr[j]);
		return;
	}
};

int main() {
    return 0;
}