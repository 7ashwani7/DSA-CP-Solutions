#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int, string> mp;
    int id = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        mp[id] = longUrl;
        return to_string(id++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[stoi(shortUrl)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
int main() {
    return 0;
}