#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int d = b * b - 4 * a * c;
        if (d < 0) return {-1};
        double root1 = (-b + sqrt(d)) / (2.0 * a);
        double root2 = (-b - sqrt(d)) / (2.0 * a);
        if (root1 < root2) swap(root1, root2);
        return {int(root1),int(root2)};
    }
};
int main() {
    return 0;
}