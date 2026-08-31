class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int c=10;
        bool g=true;
        while(n>=c){
            n-=c;
            c--;
            g= (g==true)?false:true;
        }
    return !g;
    }
};