#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        if(k==1) return arr;
        int n = arr.size();
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < n; i++) {
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= k - 1) {
                result.push_back(arr[dq.front()]);
            }
        }
        return result;
    }
};
int main() {
    return 0;
}