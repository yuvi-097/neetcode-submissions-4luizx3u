class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int>mp;
        for(int h:hand){
            mp[h]++;
        }
        for(auto it:mp){
            int s=it.first;
            int freq=it.second;
            if(freq>0){
                for(int i=0;i<groupSize;i++){
                    if(mp[s+i]<freq){
                        return false;
                    }
                    mp[s+i]-=freq;
                }
            }
        }
        return true;
        
    }
};
