class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        if(n==2) return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        long long sum=skill[0]+skill[n-1];
        int j=n-2;
        long long p=skill[0]*skill[n-1];
        for(int i=1;i<n/2;i++){
            if(skill[i]+skill[j]!=sum) return -1;
            else{
                p += (skill[i]*skill[j]);
            }
            j--;
        }
    return p;
    }
};