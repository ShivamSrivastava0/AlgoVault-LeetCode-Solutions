class Solution {
public:
    int dtb(int n){
        if(n==0) return 0;
        int c=0;

        while(n){
            if(n%2==1) c++;
            n/=2;
        }
    return c;
    }

    int calculateScore(int a, int b) {
        int s1= dtb(a);
        int s2= dtb(b);

        if(s1>=s2) return s1*s2;
    return s2/s1;   
    }
};