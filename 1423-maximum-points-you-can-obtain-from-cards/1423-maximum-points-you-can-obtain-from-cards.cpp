// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
//         long long totalSum = 0;
//         long long minSumOfUnpickedCard;
//         long long currSumOfUnpickedCard = 0;
//         for(auto points: cardPoints){
//             totalSum += points;
//         }
//         // cout<<totalSum<<endl;
//         for(int i = 0; i < n-k; i++){
//             currSumOfUnpickedCard += cardPoints[i];
//         }
//         // cout<<currSumOfUnpickedCard<<endl;
//         minSumOfUnpickedCard = currSumOfUnpickedCard;
//         // cout<<minSumOfUnpickedCard<<endl;
//         for(int i = n-k; i < n; i++){
//             currSumOfUnpickedCard -= cardPoints[i-(n-k)];
//             currSumOfUnpickedCard += cardPoints[i];
//             minSumOfUnpickedCard = min(minSumOfUnpickedCard, currSumOfUnpickedCard);
//             // cout<<minSumOfUnpickedCard<<endl;
//         }
//         return (int) (totalSum - minSumOfUnpickedCard);
//     }
// };
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res = 0;
		
		//First k elements in our window
        for(int i=0;i<k;i++) res+=cardPoints[i];
        
        int curr=res;
        for(int i=k-1;i>=0;i--) {
			//We remove the last visited element and add the non-visited element from the last
            curr-=cardPoints[i];
            curr+=cardPoints[cardPoints.size()-k+i];
			
            //We check the maximum value any possible combination can give
			res = max(res, curr);
        }
        
        return res;
    }
};