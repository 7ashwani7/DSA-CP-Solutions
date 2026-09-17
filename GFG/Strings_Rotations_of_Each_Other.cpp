#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool areRotations(string &s1, string &s2) {
		// code here
		if (s1.size() != s2.size()) {
			return false;
		}
		string s = s1 + s1;
		return s.find(s2) != string::npos;
	}
};

int main() {
    return 0;
}