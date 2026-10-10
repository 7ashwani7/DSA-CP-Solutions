#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void segregateElements(vector<int>& arr) {
		// code here
		vector<int> temp;
		for (int x : arr) {
			if (x >= 0) {
				temp.push_back(x);
			}
		}
		for (int x : arr) {
			if (x < 0) {
				temp.push_back(x);
				
			}
		}
		arr = temp;
	}
};

int main() {
    return 0;
}