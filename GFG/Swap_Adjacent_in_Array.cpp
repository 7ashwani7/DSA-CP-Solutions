#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void swapElements(vector<int> &arr) {
		// code here
		for (int i = 0; i + 2 < arr.size(); i++) {
			swap(arr[i], arr[i + 2]);
		}
	}
};

int main() {
    return 0;
}