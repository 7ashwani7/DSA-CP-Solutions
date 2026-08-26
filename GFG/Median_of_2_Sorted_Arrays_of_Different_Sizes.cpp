#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double medianOf2(vector<int>& v1, vector<int>& v2) {
        // code here
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
  // without extra space
class Solution {
  public:
    double medianOf2(vector<int>& v1, vector<int>& v2) {
        // code here
        int m = v1.size();
        int n = v2.size();
        if(m>n)
            return medianOf2(v2,v1);
        int low=0, high=m;
        while(low<=high){
            int cut1= (low+high)>>1;
            int cut2= (m+n+1)/2 - cut1;
            int l1= cut1==0? INT_MIN: v1[cut1-1];
            int l2= cut2==0? INT_MIN: v2[cut2-1];
            int r1= cut1==m? INT_MAX: v1[cut1];
            int r2= cut2==n? INT_MAX: v2[cut2];
            
            if(l1<=r2 && l2<=r1){
                if((m+n)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2)
                high=cut1-1;
            else low=cut1+1;
        }
        return 0.0;
    }
};
int main() {
    return 0;
}