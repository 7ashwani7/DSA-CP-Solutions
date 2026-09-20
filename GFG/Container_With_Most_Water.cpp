#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int maxWater(vector<int> &arr) {
		// code here
		int ans = 0;
		int low, high = arr.size() - 1;
		while (low < high) {
			int w = high - low;
			int h = min(arr[low], arr[high]);
			ans = max(ans, w * h);
			if (arr[low] < arr[high]) {
				low++;
			} else {
				high--;
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}