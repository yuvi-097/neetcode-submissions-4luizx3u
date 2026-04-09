class Solution {
public:
    bool palindrome(string s){
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[r]!=s[l]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void helper(string s,vector<vector<string>>&res,vector<string>&temp,int ind){
        if(ind==s.length()){
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<s.length();i++){
            string sub=s.substr(ind,i-ind+1);
            if(palindrome(sub)){
                temp.push_back(sub);
                helper(s,res,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        helper(s,res,temp,0);
        return res;
    }
};