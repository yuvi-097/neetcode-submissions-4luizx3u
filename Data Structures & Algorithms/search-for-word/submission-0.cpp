class Solution {
public:
    bool helper(vector<vector<char>>& board,string word,vector<vector<bool>>& visi,int i,int j,int ind){
        if(ind==word.size()){
            return true;
        }
        int n=board.size();
        int m=board[0].size();
        if(i<0 || j<0 || i>=n ||j>=m || visi[i][j] || board[i][j]!=word[ind] ){
            return false;
        }
        visi[i][j]=true;
        bool f=helper(board,word,visi,i+1,j,ind+1) ||
        helper(board,word,visi,i-1,j,ind+1) ||
        helper(board,word,visi,i,j+1,ind+1) ||
        helper(board,word,visi,i,j-1,ind+1);
        visi[i][j]=false;
        return f;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> visi(n, vector<bool>(m, false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(helper(board,word,visi,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
