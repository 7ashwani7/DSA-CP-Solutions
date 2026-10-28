#include <bits/stdc++.h>
using namespace std;
class MyCalendarTwo {
    map<int, int> diff;

public:
    MyCalendarTwo() {}

    bool book(int startTime, int endTime) {
        diff[startTime]++;
        diff[endTime]--;
        int count = 0;
        for (auto& x : diff) {
            count += x.second;
            if (count > 2) {
                diff[startTime]--;
                diff[endTime]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */
int main() {
    return 0;
}