#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int stockBuySell(vector<int> &arr) {
		// code here
		int n = arr.size();
		int ans = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i - 1]) {
                ans += arr[i] - arr[i - 1];
            }
        }
        return ans;
	}
};

int main() {
    return 0;
}