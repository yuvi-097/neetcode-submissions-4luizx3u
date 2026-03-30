class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            int k=min(heights[l],heights[r]);
            int area=(r-l)*k;
            ans=max(ans,area);
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
            
        }
        
        return ans;
    }
};
