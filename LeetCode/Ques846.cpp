#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int s) {
        int n = hand.size();
        if (n % s != 0) return false;
        multiset<int> st(hand.begin(), hand.end());
        while (!st.empty()) {
            int first = *st.begin();
            for (int i = 0; i < s; i++) {
                int card = first + i;
                if (st.count(card) == 0) return false;
                st.erase(st.find(card));
            }
        }
        return true;
    }
};
int main() {
    return 0;
}