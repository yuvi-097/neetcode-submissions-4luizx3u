class Solution {
public:
    void helper(vector<int>&nums,int target,int sum,vector<vector<int>>&res,vector<int>&temp,int i){
        if(sum==target){
            res.push_back(temp);
            return;
        }
        if(i==nums.size()){
            return;
        }
        if(sum>target){
            return;
        }
        temp.push_back(nums[i]);
        helper(nums,target,nums[i]+sum,res,temp,i);
        temp.pop_back();
        helper(nums,target,sum,res,temp,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        vector<vector<int>>res;
        helper(nums,target,0,res,temp,0);
        return res;

    }
};
