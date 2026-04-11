class Solution {
public:
    int jump(vector<int>& nums) {
        int curre=0;
        int far=0;
        int jumps=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far,i+nums[i]);
            if(i==curre){
                jumps++;
                curre=far;
            }
        }
        return jumps;
    }
};
