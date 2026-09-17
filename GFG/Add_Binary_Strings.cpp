#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	string addBinary(string& a, string& b) {
		// code here
		int i = a.size() - 1;
		int j = b.size() - 1;
		int carry = 0;
		string ans = "";
		while (i >= 0 || j >= 0 || carry) {
			int sum = carry;
			if (i >= 0) {
				sum += a[i--] - '0';
			}
			if (j >= 0) {
				sum += b[j--] - '0';
			}
			ans += char('0' + (sum % 2));
			carry = sum / 2;
		}
		reverse(ans.begin(), ans.end());
	    int pos = 0;
        while(pos < ans.size() - 1 && ans[pos] == '0'){
            pos++;
        }
        return ans.substr(pos);
	}
};

int main() {
    return 0;
}