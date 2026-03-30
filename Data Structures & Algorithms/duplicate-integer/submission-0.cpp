class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        unordered_set<int>set;
        for(int num : nums){
            if(set.count(num)) return true;
            set.insert(num);
        }
        return false;
    }
};
