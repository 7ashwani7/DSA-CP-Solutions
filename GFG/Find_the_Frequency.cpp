#include <bits/stdc++.h>
using namespace std;
/*Function to find frequency of x
* x : element whose frequency is to be found
* arr : input vector
*/
class Solution {
	public:
	int findFrequency(vector<int> arr, int x) {
		// Your code here
		int ans = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == x)
				ans++;
		}
		return ans;
	}
};
int main() {
    return 0;
}