class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0,res=0,f=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            f=max(f,mp[s[i]]);
            while((i-l+1)-f>k){
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
