class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int countOne=0,countZero=0,ans=INT_MAX;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='0') {
                countZero++;
            }
        }
        for(int i=0;i<s.length();i++) {
            ans=min(ans,countOne+countZero);
            if(s[i]=='0') {
                countZero--;
            }
            else{
                countOne++;
            }
        }
        ans=min(ans,countOne+countZero);
        return ans;

    }
};