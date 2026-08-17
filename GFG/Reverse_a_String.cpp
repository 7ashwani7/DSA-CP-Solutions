#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size();
        int i = 0, j = n-1;
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};

int main() {
    return 0;
}