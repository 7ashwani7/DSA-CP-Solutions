#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	long long maxDiamonds(vector<int>& arr, int k) {
		// code here
		priority_queue<int> pq;
		for (int x : arr) {
			pq.push(x);
		}
		long long ans = 0;
		while (k--) {
			int x = pq.top();
			pq.pop();
			ans += x;
			pq.push(x / 2);
		}
		return ans;
	}
};

int main() {
    return 0;
}