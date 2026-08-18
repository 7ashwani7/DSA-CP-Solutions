#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
    
    int i = 0, j = n - 1;
        while (i < j) {
            if (arr[i] > arr[j])
                i++;
            else
                j--;
        }
        return arr[i];
    }

};
int main() {
    return 0;
}