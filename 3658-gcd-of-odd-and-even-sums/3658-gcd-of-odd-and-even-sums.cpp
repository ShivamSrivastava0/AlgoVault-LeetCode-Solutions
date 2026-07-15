class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so=0;
        int se=0;

        for(int i=1;i<=2*n;i++){
            if(i%2==0) se+=i;
            else so +=i;
        }

        return gcd(so,se);
    }
};