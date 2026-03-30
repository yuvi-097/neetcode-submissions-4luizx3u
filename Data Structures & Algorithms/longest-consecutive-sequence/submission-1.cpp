class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:nums){
            int s=0,c=num;
            while(st.find(c)!=st.end()){
                s++;
                c++;
            }
            res=max(res,s);
        }
        return res;
    }
};
