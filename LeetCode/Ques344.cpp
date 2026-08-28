#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, end=s.size()-1;
        while(st<end){
            swap(s[st++], s[end--]);
        }
        
    }
};
int main() {
    return 0;
}