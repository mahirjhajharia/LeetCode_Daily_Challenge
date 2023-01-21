class Solution {
public:
bool check(string ip) {
    string temp=""; 
    int numDots=0;
    if(ip[0]=='.') {
        return false;

    }
    if(ip[ip.length()-1]=='.') {
        return false;
    }
    for(int i=0;i<ip.length();i++) {
        
        if(ip[i]=='.') {
            
            numDots++;
            if(temp.length()>3) {
                return false;
            }
           //cout<<temp<<" ";
           int x=stoi(temp);
           if(x>255) {
               return false;
           }
           if(temp.length()>1 && temp[0]=='0') {
               return false;

           }
           temp="";
        }else{
            temp+=ip[i];
        }
    }

     if(temp.length()>3) {
                return false;
    }
    int x=stoi(temp);
    if(x>255) {
        return false;
    }
    if(temp.length()>1 && temp[0]=='0'){
        return false;

    }
    if(numDots!=3) {
        return false;
    }
    return true;

} 
/*void solve(string op,string ip,vector<string>&ans) {
    if(ip.length()==0) {
        if(check(op)==true){ 
            ans.push_back(op);
        }
        return ;
    }
    string op1=op+ip[0];
    string op2=op+ip[0]+"."; 
    ip.erase(ip.begin()+0);
    solve(op1,ip,ans);
    solve(op2,ip,ans);
} */
    vector<string> restoreIpAddresses(string s) {
        string op="";
        string ip=s;
        vector<string>ans;
        int n=s.length();

        //solve(op,ip,ans);

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                for(int k=j+1;k<n;k++) {

                    for(int l=0;l<n;l++) {
                        temp+=s[l];
                        if(l==i || l==j || l==k) {
                            temp+='.';
                        }
                    }

                }
            }
        }
        return ans;
    }
};