#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n= arr.size();
        sort(arr.begin() , arr.end());
        set<int> s;
        for(int i=1; i<n; i++){
            if(arr[i-1] == arr[i])
             s.insert(arr[i]);
        }
        
        vector<int> v(s.begin(), s.end());
        return v;
    }
};
int main() {
    return 0;
}