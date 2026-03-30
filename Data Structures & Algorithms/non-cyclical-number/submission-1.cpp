class Solution {
public:
    int square(int n){
        int sq=0;
        while(n>0){
            int d=n%10;
            sq=sq+d*d;
            n=n/10;
        }
        return sq;
    }
    bool isHappy(int n) {
        while(true){
        int k=square(n);
        if(k==1) return true;
        if(k==4) return false;
        n=k;
        }
    }
};
