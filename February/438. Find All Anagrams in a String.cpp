class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()) {
            ans;
        }
        vector<int>string1(26,0);
        vector<int>string2(26,0);

        for(int i=0;i<p.size();i++) {
            string1[p[i]-'a']++;
        }
        int i=0,j=0;
        int k=p.size();
        while(j<s.size()) {
            string2[s[j]-'a']++;
            if(j-i+1==k) {
                if(string1==string2) {
                    ans.push_back(i);
                    string2[s[i]-'a']--;
                    i++;
                    j++;
                    
                }
                else {
                    string2[s[i]-'a']--;
                    i++;
                    j++;
                }
            }
            if(j-i+1<k) {
                j++;
            }
        }
        return ans;

    }
};