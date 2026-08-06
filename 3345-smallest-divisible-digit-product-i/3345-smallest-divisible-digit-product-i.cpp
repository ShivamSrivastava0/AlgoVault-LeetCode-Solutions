class Solution {
public:
    int prod(int n){
        int p=1;
        while(n){
            p*=(n%10);            
            n/=10;
        }
        
           return p;
    }
    int smallestNumber(int n, int t) {
        for(int z=n; z<n+10; z++){
        if(prod(z)%t==0) return z;
        }
  return 0;
    }
};