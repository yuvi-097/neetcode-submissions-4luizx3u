class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        bool flag=true;
        for(int num:nums){
            mp[num]++;
            if(mp[num]>1){
                flag=false;
            }
        }
        if(flag){
            return false;
        }else{
            return true;
        }
    }
};