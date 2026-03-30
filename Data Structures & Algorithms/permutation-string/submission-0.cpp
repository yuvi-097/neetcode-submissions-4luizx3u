class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        sort(s1.begin(), s1.end());
        for (int i = 0; i <= (int)s2.length() - (int)s1.length(); i++) {
            string sub = s2.substr(i, s1.length());
            sort(sub.begin(), sub.end());
            if (sub == s1) {
                return true;
            }
        }
        return false;
    }
};
