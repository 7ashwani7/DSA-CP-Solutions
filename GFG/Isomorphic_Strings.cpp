#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool areIsomorphic(string &s1, string &s2) {
		// code here
		int n = s1.size();
		int mp1[26] = {0};
		int mp2[26] = {0};
		
		for (int i = 0; i < n; i++) {
			int a = s1[i]-'a';
			int b = s2[i]-'a';
			
			if (mp1[a] != 0 && mp1[a] != b + 1) return false;
			if (mp2[b] != 0 && mp2[b] != a + 1) return false;
			
			mp1[a] = b + 1;
			mp2[b] = a + 1;
		}
		
		return true;
	}
};

int main() {
    return 0;
}