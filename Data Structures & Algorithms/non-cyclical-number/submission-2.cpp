class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1){
            if(st.count(n)){
                return false;
            }
            st.insert(n);
            int sq=0;
            while(n>0){
            int d=n%10;
            sq=sq+d*d;
            n=n/10;
            }
            n=sq;
        }
        return true;
    }
};
