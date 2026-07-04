class Solution {
public:
    bool isSubsequence(string s, string t) {
        string as="";
        int l=0,r=0;

        while(r<t.length() && as.length()!=s.length()){
            if(s[l]==t[r]){
                as += s[l];
                l++;
                r++;
            }
            else{
                r++;
            }
        }
    if(as==s) return true;
    return false;
    }
};