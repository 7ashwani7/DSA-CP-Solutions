#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	string longestCommonPrefix(vector<string> arr) {
		// your code here
		string first = arr[0];
		for(int i = 0; i < first.size(); i++){
			char ch = first[i];
			for(int j = 1; j < arr.size(); j++){
				if(i >= arr[j].size() || arr[j][i] != ch) return first.substr(0, i);
			}
		}
		return first;
	}
};

int main() {
    return 0;
}