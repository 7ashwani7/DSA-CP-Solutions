#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string check = s + s;
        for (int i = 0; i < s.size(); i++) {
            int j = 0;
            while (j < goal.size() && check[i + j] == goal[j]) j++;
            if (j == goal.size()) return true;
        }
        return false;
    }
};
// OR
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        return (s + s).find(goal) != string::npos;
    }
};
int main() {
    return 0;
}