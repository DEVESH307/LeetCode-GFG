// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         int xr = 0;
//         int ans1 = 0;
//         int ans2 = 0;
//         for(auto num: nums){
//             xr ^= num;
//         }
//         int mask = (xr&(xr-1))^xr;
//         for(auto num: nums){
//             if(num & mask){
//                 ans1 ^= num;
//             }
//             else{
//                 ans2 ^= num;
//             }
//         }
//         return {ans1, ans2};
//     }
// };

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    // xor all numbers, so the duplicates are cancelled
	int x = 0;
	for (const int curr: nums) {
		x ^= curr;    
	}

	// find the bit that is set in x.
	int bit;
	for (int i=0; i<32; ++i) {
		if (x & (1<<i)) {
			bit = i;
			break;
		}
	}

	// let the answer be first and second.
	// let first is the number that has the bit set.
	// second does not have the bit set, because x=first^second has the bit set.  
	// now xor all numbers in nums with the bit set.
	// all duplicates will be cancelled
	// only first will remain. second will not be included, as second does not have the bit set.
	int first = 0;
	for (int a: nums) {
		if (a & (1<<bit)) {
			first ^= a;
		}
	}
	// now x=first^second, therefore second = a^first
	int second = first^x;
	return {first, second};
    }
};
//please upvote if you like the solution and explaination