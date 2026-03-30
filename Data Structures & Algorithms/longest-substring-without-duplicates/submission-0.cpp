class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int l=0;
        unordered_set<char>st;
        while(j<s.length()){
          if(st.find(s[j])==st.end()){
            st.insert(s[j]);
            l=max(l,j-i+1);
            j++;
          }else{
            st.erase(s[i]);
            i++;
          }
        }
      return l;
    }
};
