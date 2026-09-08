#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int ans = 0, buy= prices[0];
        for(int i=0; i<prices.size(); i++){
            if(prices[i]> buy) ans = max(ans, prices[i]-buy);
            buy = min(buy, prices[i]);
        }
        return ans;
    }
};

int main() {
    return 0;
}