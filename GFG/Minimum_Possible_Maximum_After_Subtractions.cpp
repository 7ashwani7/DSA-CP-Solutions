#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
	int minimumNumber(vector<int> &arr) {
		// code here
		int g = arr[0];
		for (int i = 1; i < arr.size(); i++) {
			g = gcd(g, arr[i]);
		}
		return g;
	}
};

int main() {
    return 0;
}