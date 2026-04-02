class Solution {
public:
    void helper(string p,int n,int o,int e,vector<string>&res){
        if(p.size()==2*n){
            res.push_back(p);
            return;
        }
        if(o<n){
            helper(p+'(',n,o+1,e,res);
        }
        if(e<o){
            helper(p+')',n,o,e+1,res);
        }
    }
    vector<string> generateParenthesis(int n) {
        string p="";
        vector<string>res;
        helper("",n,0,0,res);
        return res;
    }
};
