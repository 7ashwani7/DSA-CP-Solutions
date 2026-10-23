#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIPv4(const string& s) {
        int n = s.size();
        int i = 0;
        int parts = 0;
        while (i < n) {
            int start = i;
            int val = 0;
            while (i < n && s[i] >= '0' && s[i] <= '9') {
                val = val * 10 + (s[i] - '0');
                if (val > 255) return false;
                i++;
            }
            int len = i - start;
            if (len == 0 || len > 3) return false;
            if (len > 1 && s[start] == '0') return false;
            parts++;
            if (i < n) {
                if (s[i] != '.' || parts == 4) return false;
                i++;
            }
        }
        return parts == 4 && s.back() != '.';
    }
    bool checkIPv6(const string& s) {
        int n = s.size();
        int i = 0;
        int parts = 0;
        while (i < n) {
            int start = i;
            while (i < n) {
                char c = s[i];
                if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))) break;
                i++;
            }
            int len = i - start;
            if (len == 0 || len > 4) return false;
            parts++;
            if (i < n) {
                if (s[i] != ':' || parts == 8) return false;
                i++;
            }
        }
        return parts == 8 && s.back() != ':';
    }

    string validIPAddress(string queryIP) {
        if (queryIP.empty()) return "Neither";
        if (queryIP.find('.') != string::npos) return checkIPv4(queryIP) ? "IPv4" : "Neither";
        if (queryIP.find(':') != string::npos) return checkIPv6(queryIP) ? "IPv6" : "Neither";
        return "Neither";
    }
};

int main() {
    return 0;
}