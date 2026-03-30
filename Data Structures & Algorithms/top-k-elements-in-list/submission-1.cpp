class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    for(int num:nums){
        mp[num]++;
    }
    for(auto&p:mp){
        pq.push({p.second,p.first});
    }
    vector<int>res;
    for(int i=0;i<k&&!pq.empty();i++){
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
    }
};
