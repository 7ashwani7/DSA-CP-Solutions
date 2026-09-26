#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int largest(vector<int> &arr) {
		// code here
		int n = arr.size();
		int mx = 0;
		for (int i = 0; i < n ; i++) {
			if (arr[i] > mx)
				mx = arr[i];
		}
		return mx;
	}
};
int main() {
    return 0;
}
