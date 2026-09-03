class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int c=duration;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]-timeSeries[i-1]>=duration){
                c+=duration;
            }
            else{
                c+=timeSeries[i]-timeSeries[i-1];
            }     
        }
    return c;
    }
};