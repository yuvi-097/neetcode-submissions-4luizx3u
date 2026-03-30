class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                flag=true;
            }
        }
        if(flag){
            return true;
        }else{
            return false;
        }
    }
};