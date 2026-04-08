class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);
        for(char c:tasks){
            mp[c-'A']++;
        }
        sort(mp.begin(),mp.end());
        int maxfreq=mp[25];
        int t=(maxfreq-1)*n;
        for(int i=24;i>=0;i--){
            t-=min(mp[i],maxfreq-1);
        }
        t=max(0,t);
        return tasks.size()+t;
    }
};
