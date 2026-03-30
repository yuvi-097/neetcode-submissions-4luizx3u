class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string str:strs){
            string k=str;
            sort(k.begin(),k.end());
            mp[k].push_back(str);
        }
        vector<vector<string>>res;
        for(auto &p:mp){
            res.push_back(p.second);
        }
        return res;
    }
};
