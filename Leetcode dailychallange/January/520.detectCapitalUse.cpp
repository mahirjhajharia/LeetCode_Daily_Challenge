class Solution {
public:
    bool detectCapitalUse(string word) {
        char first=word[0];
       // if(first<'A' || first>'Z') {
      //      return false;
     //   }

        int smallcase=0;
        int uppercase=0;
        int n=word.size();


        for(int i=0;i<n;i++) {
            if(word[i]>='A' && word[i]<='Z') {

                uppercase++;

            }
            else {
                smallcase++;
            }
        }
        if((uppercase==n) || smallcase==n){
            return true;
        }
        if(word[0]>='A' && word[0]<='Z' && uppercase==1) {
            return true;
        }

        return false;


    }
};