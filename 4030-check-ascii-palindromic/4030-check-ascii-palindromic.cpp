class Solution {
public:
    string dToBinary(int num){
        string a = "";
        
        int d = num;
        int c=0;
        while(num){
            ++c;
            a += (d%2);
            d/=2;
            if(c==8)
                break;
        }
        return a;
    }

    bool isPalindromic(string s){
        string ty = "";
        for(auto x : s){
            int f = x;
            ty += dToBinary(f);
        }
        string as = ty;
        reverse(ty.begin(),ty.end());
        return as==ty;
    }
};