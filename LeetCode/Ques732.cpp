#include <bits/stdc++.h>
using namespace std;
class MyCalendarThree {
    map<int, int> diff;

public:
    MyCalendarThree() {}

    int book(int startTime, int endTime) {
        diff[startTime]++;
        diff[endTime]--;
        int count = 0;
        int k = 0;
        for (auto& x : diff) {
            count += x.second;
            k = max(k, count);
        }
        return k;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */
int main() {
    return 0;
}