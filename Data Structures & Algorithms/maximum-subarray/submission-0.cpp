class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curs=nums[0];
        int maxs=nums[0];
        for(int i=1;i<n;i++){
            curs=max(nums[i],curs+nums[i]);
            maxs=max(maxs,curs);
        }
        return maxs;
    }
};
