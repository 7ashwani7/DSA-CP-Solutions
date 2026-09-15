#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n= mat.size();
        vector<vector<int>> ans(mat.begin(),mat.end());
        for(int a=0; a<k; a++){
            for(int i=0; i<n; i++){
                if(i%2==0){
                    for(int j=0; j<mat[0].size()-1; j++) 
                    swap(ans[i][j] ,ans[i][j+1]);
                    
                }
                else{
                    for(int j=mat[0].size()-1;j>0; j--) 
                    swap(ans[i][j] ,ans[i][j-1]);
                }
            }
        }
        return (mat == ans);
        
    }
};
int main() {
    return 0;
}