class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        int l=0;
        for(int r=0;r<n;r++){
            int maxn=INT_MIN;
            if(r-l+1==k){
                for(int i=l;i<=r;i++){
                    maxn=max(maxn,nums[i]);
                }
                res.push_back(maxn);
                l++;
            }
        }
        return res;
    }
};
