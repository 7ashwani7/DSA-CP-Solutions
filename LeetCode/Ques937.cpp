#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool comp(const string& a, const string& b) {
        int posA = a.find(' ');
        int posB = b.find(' ');

        string idA = a.substr(0, posA);
        string idB = b.substr(0, posB);

        string contentA = a.substr(posA + 1);
        string contentB = b.substr(posB + 1);

        if (contentA != contentB) {
            return contentA < contentB;
        }
        return idA < idB;
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letterLogs;
        vector<string> digitLogs;
        for (string& log : logs) {
            int pos = log.find(' ');
            if (isdigit(log[pos + 1])) {
                digitLogs.push_back(log);
            } else {
                letterLogs.push_back(log);
            }
        }
        sort(letterLogs.begin(), letterLogs.end(), comp);
        letterLogs.insert(letterLogs.end(), digitLogs.begin(), digitLogs.end());
        return letterLogs;
    }
};
int main() {
    return 0;
}