class Solution {
public:
    bool zero(int n){
        while(n){
            if(n%10==0) 
                return true;
            n/=10;
        }
    return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++){
            int l=i, r=n-i;
            if(!zero(l) && !zero(r)){
                return {l,r};
            }
        }
    return {-1,-1};
    }
};