class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            int l=i, r=i+needle.size()-1;
            int k=0;
            string as = "";
            if(r<haystack.length()){
                while(l<=r){
                    if(haystack[l]==needle[k++]){
                        as += haystack[l];
                        l++;
                    }
                    else break;
                }
                if(as==needle)
                    return i;
            }
            k=0;
        }
    return -1;
    }
};