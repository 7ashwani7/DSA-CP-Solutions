#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && title[j] != ' ') {
                title[j] = tolower(title[j]);
                j++;
            }
            int len = j - i;
            if (len > 2) {
                title[i] = toupper(title[i]);
            }
            i = j + 1;
        }
        return title;
    }
};
int main() {
    return 0;
}