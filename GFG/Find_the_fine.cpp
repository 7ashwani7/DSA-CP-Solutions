#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int n=car.size();
        long long int sum=0;
        if(date % 2 ==0){
            for(int i=0; i<n; i++){
                if(car[i] % 2 !=0){
                    sum+=fine[i];
                }
            }
        } else{
            for(int i=0; i<n; i++){
                if(car[i] % 2 ==0){
                    sum+=fine[i];
                }
            }
        }
        
        return sum;
    }
};
int main() {
    return 0;
}