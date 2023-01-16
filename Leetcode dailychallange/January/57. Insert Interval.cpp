class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        intervals.push_back({100001,100002});
        vector<vector<int>> ans;
        int start=-1;
        int end=-1;
        
        for(int i=0;i<intervals.size();i++) {
            if(i!=intervals.size()-1 && intervals[i][1]<intervals[i+1][0]){
                ans.push_back(intervals[i]);
            }
            else{

                start=intervals[i][0];
                end=intervals[i][1];
                while(i!=intervals.size()-1 && end>=intervals[i+1][0]  ) {
                    i++;
                    end=max(end,intervals[i][1]);
                }
                ans.push_back({start,end});

            }
        }
        ans.pop_back();
        return ans;




       
    }
};