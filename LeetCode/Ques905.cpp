#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        while(left < right){
            if(arr[left] % 2 == 0){
                left++;
            }
            else{
                swap(arr[left], arr[right]);
                right--;
            }
        }
        return arr;
    }
};
int main() {
    return 0;
}