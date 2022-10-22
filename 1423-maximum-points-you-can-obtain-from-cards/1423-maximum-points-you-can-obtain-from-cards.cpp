class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int currSum = 0;
        int maxSum;
        for(int i = 0; i < k; i++){
            currSum += cardPoints[i];
        }
        maxSum = currSum;
        for(int i = k-1; i >= 0; i--){
            currSum -= cardPoints[i];
            currSum += cardPoints[n-k+i];
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};