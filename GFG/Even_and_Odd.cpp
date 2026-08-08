#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reArrange(int arr[], int n) {
        int even = 0, odd = 1;

        while (even < n && odd < n) {
            if (arr[even] % 2 == 0) {
                even += 2;
            } 
            else if (arr[odd] % 2 == 1) {
                odd += 2;
            } 
            else {
                swap(arr[even], arr[odd]);
                even += 2;
                odd += 2;
            }
        }
    }
};
int main() {
    return 0;
}