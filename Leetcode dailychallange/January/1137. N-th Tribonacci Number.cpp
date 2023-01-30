class Solution {
public:
    int tribonacci(int n){
        if(n==0||n==1){
            return n;
        }
        if(n==2){
            return 1;
        }
        int t1=1;
        int t2=1;
        int t3=0;
        int curr;
        for(int i=3;i<=n;i++){
            curr=t1+t2+t3;
            t3=t2;
            t2=t1;
            t1=curr;
        }
        return curr;
    }
};
