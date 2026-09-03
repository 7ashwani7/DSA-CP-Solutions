#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> separateChaining(int hashSize, vector<int>& arr) {
        // code here
        vector<vector<int>> hashTable(hashSize);

        for(int x : arr) {
            int index = x % hashSize;
            hashTable[index].push_back(x);
        }
        
        return hashTable;
    }
};
int main() {
    return 0;
}