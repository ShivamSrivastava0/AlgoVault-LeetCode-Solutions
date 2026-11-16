class Solution {
public:
    string digitSum(string s, int k) {

        while(s.length()>k){
            string as;
            for(int i=0;i<s.length();i+=k){
                int sm=0;
                int mn =min(i+k,(int)s.length());
                for(int j=i;j<mn;j++){
                    sm+=s[j]-'0';
                }
                as+=to_string(sm);
            }
        s=as;
        }
    return s;
    }
};