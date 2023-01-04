class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int roundCount=0;
        for(int i=0;i<tasks.size();i++) {
            mp[task[i]]++;
        }
        unordered_map<int,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++) {
            if(it->second==1) {
                return -1;
            }
            int temp=it->second;
            int modAns=temp%3;
            if(modAns==0) {
                roundCount=temp/3;
            }
             if(modAns==1 || modAns==2) {
                roundCount=temp/3;
                roundCount++;

            }
             
        }
        return roundCount;
    }
};