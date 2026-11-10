#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> freq(1001, 0);
        for(int x : target){
            freq[x]++;
        }
        for(int x : arr){
            freq[x]--;
        }
        for(int x : arr){
            if(freq[x] != 0){
                return false;
            }
        }
        return true;
    }
};
int main() {
    return 0;
}