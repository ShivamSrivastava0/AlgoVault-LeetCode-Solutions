class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0,p=1;
        while(num>0){
            sum+=(num%10);
            p*=(num%10);
            num/=10;
        }
        cout<<sum+p;
    return (n%(sum+p)==0);
    }
};