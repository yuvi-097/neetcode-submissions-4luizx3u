class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&res,vector<int>&temp,int target,int sum,int ind){
        if(sum==target){
            res.push_back(temp);
            return;
        }
        if(sum> target){
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            helper(nums,res,temp,target,sum+nums[i],i+1);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>res;
        helper(nums,res,temp,target,0,0);
        return res;
    }
};
