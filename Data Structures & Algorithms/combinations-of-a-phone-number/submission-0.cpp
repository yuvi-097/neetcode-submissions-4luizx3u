class Solution {
public:
    vector<string> mapping = {
        "",    // 0
        "",    // 1
        "abc", // 2
        "def", // 3
        "ghi", // 4
        "jkl", // 5
        "mno", // 6
        "pqrs",// 7
        "tuv", // 8
        "wxyz" // 9
    };
    void helper(string digits,string path,int ind,vector<string>&res){
        if(ind==digits.size()){
            res.push_back(path);
            return;
        }
        string let=mapping[digits[ind]-'0'];
        for(char c:let){
            helper(digits,path+c,ind+1,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty()){
            return {};
        }
        helper(digits,"",0,res);
        return res;
    }
};
