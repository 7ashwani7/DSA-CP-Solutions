#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void segregate0and1(vector<int> &arr) {
		// code here
		int left = 0;
		int right = arr.size() - 1;
		while (left < right) {
			while (arr[left] == 0 && left < right) left++;
			while (arr[right] == 1 && left < right) right--;
			if (left < right) {
				swap(arr[left], arr[right]);
				left++;
				right--;
			}
		}
	}
};

int main() {
    return 0;
}