class Solution {
public:
    int trap(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        int lmax=heights[l];
        int rmax=heights[r];
        while(l<r){
            if(heights[l]<heights[r]){
                l++;
                lmax=max(lmax,heights[l]);
                ans+=lmax-heights[l];
            }else{
                r--;
                rmax=max(rmax,heights[r]);
                ans+=rmax-heights[r];
            }
        }
        return ans;
    }
};
