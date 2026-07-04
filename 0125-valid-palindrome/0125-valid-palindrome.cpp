class Solution {
public:
    bool isPalindrome(string s) {
        string as = "";
        for(char c: s){
            if(isalnum(c)){
                as+= tolower(c);
            }
        }

        int l=0,r=as.length()-1;
        while(l<r){
            if(as[l]==as[r]){
                l++;
                r--;
            }
            else return false;
        }
    return true;
    }
};