class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>> v;
        int n=scores.size();
        for(int i=0;i<n;i++){
            v.push_back({-ages[i],-scores[i]});
        }
        sort(v.begin(),v.end());
        int a[n];
        memset(a,0,sizeof a);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(-v[i][1]<=-v[j][1]){
                    a[i]=max(a[i],a[j]-v[i][1]);
                }
            }
            ans=max(ans,a[i]);
        }
        return ans;
    }
};
