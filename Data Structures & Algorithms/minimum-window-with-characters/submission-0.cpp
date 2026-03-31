class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char,int>mp;
        for(char c:t){
            mp[c]++;
        }
        unordered_map<char,int>win;
        int have=0;
        int need=mp.size();
        pair<int, int> res = {-1, -1};
        int resl=INT_MAX;
        int l=0;
        for(int r=0;r<s.length();r++){
            char c=s[r];
            win[c]++;
            if(mp.count(c) && win[c] == mp[c]){
                have++;
            }
            while(have==need){
                if((r-l+1)<resl){
                    resl=r-l+1;
                    res={l,r};
                }
                win[s[l]]--;
                if(mp.count(s[l]) && win[s[l]]<mp[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return resl==INT_MAX ? "" : s.substr(res.first,resl);
    }
};
 