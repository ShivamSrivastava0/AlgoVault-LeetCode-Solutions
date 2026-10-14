class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ls="";
        while(num>0 && sum>0){
            if(sum>=9){
                ls+='9';
                sum-=9;
            }
            else{
                ls+= to_string(sum);
                sum=0;
            }
            num--;
        }

        while(num>0){
            ls+='0';
            num--;
        }

        if(sum>0){
            return "";
        }
    return ls;
    }
};