#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        int m = v1.size();
        int n = v2.size();
        vector<int> v(n+m);
        int idx= m+n-1, i=m-1, j=n-1;
        while(i>=0 && j>=0){
            if(v1[i]>=v2[j])
                v[idx--]=v1[i--];
            else
                v[idx--]=v2[j--];
        
        } 
        while(i>=0)
        v[idx--]= v1[i--];  
        while(j>=0)
        v[idx--]= v2[j--];
        double med =0;
        if((n+m)%2==0)
            med= (v[((n+m)/2-1)] + v[((n+m)/2)])/2.0;
        else med= (v[(n+m)/2])/1.0;
        
        return med;
    }
};
int main() {
    return 0;
}