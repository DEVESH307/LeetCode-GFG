class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        for(auto &t: time){
            t %= 60;
        }
        vector<int> mp(60, 0);
        for(auto t: time){
            if(t == 0){
                ans += mp[0];
            }
            else{
                ans += mp[60-t];
            }
            mp[t]++;
        }
        return ans;
    }
};