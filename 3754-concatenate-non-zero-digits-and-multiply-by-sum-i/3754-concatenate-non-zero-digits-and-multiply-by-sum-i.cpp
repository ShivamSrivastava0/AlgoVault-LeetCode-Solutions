class Solution {
public:
    long long sumAndMultiply(int n) {
        int rev = 0,sum=0;
        while(n>0){
            if(n%10!=0){
                rev = rev*10 + (n%10);
                sum += (n%10);
            }
            n/=10;
        }

        string as = to_string(rev);
        reverse(as.begin(),as.end());

    return (long long)stoi(as)*sum;
    }
};