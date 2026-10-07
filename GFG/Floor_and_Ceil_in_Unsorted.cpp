#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> getFloorAndCeil(int x, vector<int> &arr) {
		// code here
		int floor = -1;
		int ceil = -1;
		for (int num : arr) {
			if (num <= x) {
				if (floor == -1 || num > floor) {
					floor = num;
				}
			}
			if (num >= x) {
				if (ceil == -1 || num < ceil) {
					ceil = num;
				}
			}
		}
		return {floor, ceil};
	}
};

int main() {
    return 0;
}