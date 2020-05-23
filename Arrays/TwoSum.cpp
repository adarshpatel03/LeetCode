/*
@author : Adarsh Patel
@email : patel.adarsh@outlook.com
This sollution is brute force solution to the problem.
Time Complexity : O(n^2)
Space Compleity : O(1);

Hint:
We can solve this question with O(n) time complexity using Hash Map, where use value as nums and key as index.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i=0;i<nums.size();i++) {
            for (int j=i+1;j<nums.size();j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;        
    }
};
