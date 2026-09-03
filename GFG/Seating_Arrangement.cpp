#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        int n = seats.size();
         for (int i = 0; i < n && k > 0; ++i) {
            if (seats[i] == 0 && (i == 0 || seats[i - 1] == 0) && (i == n - 1 || seats[i + 1] == 0)) {
                seats[i] = 1;
                --k;
            }
        }
        return k == 0;
    }
};
int main() {
    return 0;
}