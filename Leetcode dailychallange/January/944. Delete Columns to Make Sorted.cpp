class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int stringSize=strs[0].size();
        int del=0;
        
        for(int i=0;i<stringSize;i++) {
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++) {
                if(c>strs[j][i]){
                    del++;
                    break;
                }
                

                    c=strs[j][i];

                
            }
        }
        return del;
    }
};