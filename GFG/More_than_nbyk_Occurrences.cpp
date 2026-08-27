#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        if(k==0) return 0;
        int n= arr.size();
        int count=0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(const auto&it : mp){
            if(it.second > (n/k)){
                count++;
            }
        }
        
        return count;
    }
};
int main() {
    return 0;
}