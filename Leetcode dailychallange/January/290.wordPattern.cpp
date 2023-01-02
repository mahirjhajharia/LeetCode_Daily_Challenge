class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string curr="";
        vector<string>word;
        for(int i=0;i<s.length();i++) {
            if(s[i]==' '){
                word.push_back(curr);
                curr="";
            }
            else{
            curr+=s[i];
            }
        }
        word.push_back(curr);

        if(pattern.size()!=word.size()) {
            return false;
        }

        vector<string>mapCharToWord(26,"");
        for(int i=0;i<pattern.length();i++) {
            if(mapCharToWord[int(pattern[i]-'a')]=="") {
                mapCharToWord[int(pattern[i]-'a')]=word[i];
            }
            else{
               if(mapCharToWord[int(pattern[i]-'a')]!=word[i])
               {
                   return false;
               }
            }
        }

        for(int i=0;i<25;i++) {
            for(int j=i+1;j<26;j++) {
                if(mapCharToWord[i]==mapCharToWord[j] && mapCharToWord[i]!=""){
                    return false;
                }

            }
        }
        return true;
    }
};