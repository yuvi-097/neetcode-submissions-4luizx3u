class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
          mp[num]++;
        }
        for(auto&p: mp){
          if(p.second>1){
            return p.first;
          }
        }
        return -1;
    }
};
