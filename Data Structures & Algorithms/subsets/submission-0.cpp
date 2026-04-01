class Solution {
public:
    void helper(vector<int>&nums,int ind,vector<int>&temp,vector<vector<int>>&res){
        int n=nums.size();
        res.push_back(temp);
        for(int i=ind;i<n;i++){
            temp.push_back(nums[i]);
            helper(nums,i+1,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>res;
        helper(nums,0,temp,res);
        return res;
    }
};
