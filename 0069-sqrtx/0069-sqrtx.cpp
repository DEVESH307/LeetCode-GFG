class Solution {
public:
    int mySqrt(int x) {
        int N = INT_MAX;
        int ans = 0;
        int low = 0;
        int high = min(N, x);
        while(low <= high){
            int mid = (low+high)/2;
            if(mid*1LL*mid <= x){
                ans =  mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};