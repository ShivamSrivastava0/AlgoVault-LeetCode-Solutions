class Solution {
public:
    int days(string s){
        vector<int> ls = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int mon = stoi(s.substr(0,2));
        int day = stoi(s.substr(3,4));
        for(int i=1;i<mon;i++){
            day+=ls[i];
        }
    return day;    
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int as=days(arriveAlice);
        int al=days(leaveAlice);

        int bs=days(arriveBob);
        int bl=days(leaveBob);
        int ar = max(as,bs);
        int le =min(al,bl);
        
    return max(0,le-ar+1);
    }
};