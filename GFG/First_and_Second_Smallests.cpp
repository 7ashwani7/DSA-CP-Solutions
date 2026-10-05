#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> minAnd2ndMin(vector<int> &arr) {
		// code here
		int mi1 = INT_MAX;
		int mi2 = INT_MAX;
		for (int x : arr) {
			if (x < mi1) {
				mi2 = mi1;
				mi1 = x;
			}
			else if (x > mi1 && x < mi2) {
				mi2 = x;
			}
		}
		if (mi2 == INT_MAX){
			return {-1};
		}
		return {mi1, mi2};
	}
};

int main() {
    return 0;
}