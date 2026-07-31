class Solution {
public:
    int minimumPushes(string word) {
        vector<int> frq(26,0);
        for(char ch:word){
            frq[ch-'a']++;
        }
        sort(frq.begin(),frq.end());
        int idx=0;
        int c = 0;
        for(int i=25;i>=0;i--){
            if(frq[i]==0){
                break;
            }
            c+=(idx/8+1)*frq[i];
            idx++;
        }
    return c;
    }
};