#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> ans;
    void solve(int idx, int hour, int minute, int count, int n) {
        if (hour > 11 || minute > 59 || count > n) return;
        if (idx == 10) {
            if (count == n) {
                string time = to_string(hour) + ":";
                if (minute < 10) time += "0";
                time += to_string(minute);
                ans.push_back(time);
            }
            return;
        }
        solve(idx + 1, hour, minute, count, n);
        if (idx < 4) solve(idx + 1, hour + (1 << idx), minute, count + 1, n);
        else solve(idx + 1, hour, minute + (1 << (idx - 4)), count + 1, n);
    }
    vector<string> readBinaryWatch(int turnedOn) {
        ans.clear();
        if (turnedOn > 8) return ans;
        solve(0, 0, 0, 0, turnedOn);
        return ans;
    }
};
int main() {
    return 0;
}