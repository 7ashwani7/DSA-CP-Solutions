#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int i=0, j=0;
        while(i<a.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else {
                return i;
            }
        }
    }
};
int main() {
    return 0;
}