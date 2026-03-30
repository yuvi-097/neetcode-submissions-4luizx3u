class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string str:strs){
            string st=str;
            sort(st.begin(),st.end());
            mp[st].push_back(str);
        }
        vector<vector<string>>res;
        for(auto&k:mp){
            res.push_back(k.second);
        }
        return res;
    }
};
