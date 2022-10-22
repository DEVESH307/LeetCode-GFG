class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        long long totalSum = 0;
        long long minSumOfUnpickedCard;
        long long currSumOfUnpickedCard = 0;
        for(auto points: cardPoints){
            totalSum += points;
        }
        // cout<<totalSum<<endl;
        for(int i = 0; i < n-k; i++){
            currSumOfUnpickedCard += cardPoints[i];
        }
        // cout<<currSumOfUnpickedCard<<endl;
        minSumOfUnpickedCard = currSumOfUnpickedCard;
        // cout<<minSumOfUnpickedCard<<endl;
        for(int i = n-k; i < n; i++){
            currSumOfUnpickedCard -= cardPoints[i-(n-k)];
            currSumOfUnpickedCard += cardPoints[i];
            minSumOfUnpickedCard = min(minSumOfUnpickedCard, currSumOfUnpickedCard);
            // cout<<minSumOfUnpickedCard<<endl;
        }
        return (int) (totalSum - minSumOfUnpickedCard);
    }
};