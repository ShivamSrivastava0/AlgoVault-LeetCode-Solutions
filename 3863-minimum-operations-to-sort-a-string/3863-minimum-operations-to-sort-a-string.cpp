class Solution {
public:
    int minOperations(string s) {
        string st = s;
        sort(st.begin(),st.end());
        if(st==s) 
            return 0;
        if(s.length()==2)
            return -1;
        char mn='z',mx='a';
        for(auto x : s){
            mn=min(mn,x);
            mx=max(mx,x);
        }

        if(s[0]==mn || s[s.length()-1]==mx){
            return 1;}
        char mid_mn='z', mid_mx='a';
        for(int i=1;i<s.length()-1;i++){
            mid_mn=min(mid_mn,s[i]);
            mid_mx=max(mid_mx,s[i]);
        }
        if(s[0]>mid_mx && s[s.length()-1]<mid_mn){
            return 3;
        }

    return 2;
    }
};