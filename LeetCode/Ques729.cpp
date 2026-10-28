#include <bits/stdc++.h>
using namespace std;
class MyCalendar {
    map<int, int> diff;

public:
    MyCalendar() {}

    bool book(int startTime, int endTime) {
        diff[startTime]++;
        diff[endTime]--;
        int count = 0;
        for (auto& x : diff) {
            count += x.second;
            if (count > 1) {
                diff[startTime]--;
                diff[endTime]++;
                return false;
            }
        }
        return true;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */
// OR
class MyCalendar {
    map<int, int> mp;

public:
    MyCalendar() {}

    bool book(int startTime, int endTime) {
        auto it = mp.lower_bound(startTime);

        if (it != mp.end() && it->first < endTime) {
            return false;
        }
        if (it != mp.begin() && prev(it)->second > startTime) {
            return false;
        }
        mp.emplace(startTime, endTime);
        return true;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */
int main() {
    return 0;
}