class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count=1;
        int prev1=points[0][0];
        int prev2=points[0][1];

        int curr;

        for(int i=1;i<points.size();i++) {

            if(points[i][0]>prev2) {
                count++;
                prev1=points[i][0];
                prev2=points[i][1];
            }
else {
            if(points[i][0]>=prev1) {
                prev1=points[i][0];
            }
            

            if(points[i][1]<=prev2) {
                prev2=points[i][1];
            } 
}
            
        }

        return count;

    }
};