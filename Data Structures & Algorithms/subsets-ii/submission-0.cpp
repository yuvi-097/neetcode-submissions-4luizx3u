class Solution {
public:
    void helper(vector<int>&nums,vector<int>&temp,vector<vector<int>>&res,int ind){
        res.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            helper(nums,temp,res,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>res;
        helper(nums,temp,res,0);
        return res;
    }
};
