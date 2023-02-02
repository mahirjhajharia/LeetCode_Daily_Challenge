class Solution {
public:
bool compare(string one,string two,unordered_map<char,int>storeOrder) {
   
    for(int i=0;i<one.size();i++){
        if(storeOrder[one[i]]>storeOrder[two[i]]){
            return false;
        }
        else if(storeOrder[one[i]]<storeOrder[two[i]]){
            return true;
        }
    }
     if(one.size()<=two.size()) {
        return true;
    }
    
    return false;
    
}
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char,int> storeOrder;
       for(int i=0;i<order.size();i++) {
           storeOrder[order[i]]=i;
       }
       
       
       for(int i=0;i<words.size()-1;i++) 
       {
           if(compare(words[i],words[i+1],storeOrder)==false){

               return false;

           }
           
       } 

       return true;



    }
};