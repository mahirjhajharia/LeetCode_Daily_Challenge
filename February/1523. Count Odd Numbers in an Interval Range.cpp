class Solution {
public:
    int countOdds(int low, int high) {
        int ans=high-low;
        if(low%2!=0) {
            ans+=1;
        }
        if(high%2!=0) {
            ans+=1;
        }
        return ans/2;
    }
};
