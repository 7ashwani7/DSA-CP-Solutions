#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string invert(string s) {
        for (char &c : s) {
            c = (c == '1') ? '0' : '1';
        }
        return s;
    }
    string rev(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
    string f(int n) {
        if (n == 1) return "0";
        string s = f(n - 1);
        return s + "1" + rev(invert(s));
    }
    char findKthBit(int n, int k) {
        return f(n)[k - 1];
    }
};
// Optimal Solution
class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) return '0';
        int mid = (1 << (n - 1));
        if (k == mid) return '1';
        if (k < mid) return findKthBit(n - 1, k);
        char ans = findKthBit(n - 1, (1 << n) - k);
        return ans == '0' ? '1' : '0';
    }
};
int main() {
    return 0;
}