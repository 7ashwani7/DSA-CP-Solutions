#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(true){
            if(num == 0) break;
            else if(num % 2 == 0){
                num /= 2;
                count++;
            }
            else{
                num--;
                count++;
            }
        }
        return count;
    }
};
// OR 
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num){
            if(num & 1) num--;
            else num >>= 1;
            count++;
        }
        return count;
    }
};
int main() {
    return 0;
}