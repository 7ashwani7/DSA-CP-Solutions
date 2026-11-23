#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minInsertions(string s) {
        int need = 0;
        int open = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                    if (open > 0) {
                        open--;
                    } else {
                        need++;
                    }
                } else {
                    if (open > 0) {
                        need++;
                        open--;
                    } else {
                        need += 2;
                    }
                }
            }
        }
        need += open * 2;
        return need;
    }
};
int main() {
    return 0;
}