#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        static bool myCompare(string& s1, string& s2) {
        return (s1 + s2) > (s2 + s1);
    }
    string findLargest(vector<int> &arr) {
    
    vector<string> n;
    for(int ele: arr) {
        n.push_back(to_string(ele));
    }

    sort(n.begin(), n.end(), myCompare);

    if (n[0] == "0") {
        return "0";
    }

    // Concatenate the sorted array
    string res = "";
    for (string& num : n) {
        res.append(num);
    }

    return res;
    }
            
    
};
int main() {
    return 0;
}