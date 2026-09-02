/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mn=INT_MAX,mx=INT_MIN;
        ListNode* prev=head;
        ListNode* curr=head->next;

        int dist=2,ls=0;
        vector<int> sd;
        while(curr->next!=NULL){
            if((curr->val>prev->val && curr->val>curr->next->val) || (curr->val<prev->val && curr->val<curr->next->val)){
                // if(ls==0){
                //     mn=dist;
                //     mx=dist;
                //     ls=dist;
                // }
                // else{
                // mn = min(mn, abs(dist-ls));
                // mx = max(mx, abs(dist-ls));
                // ls=dist;}
                sd.push_back(dist);
                ls=dist;
            }
            prev=curr;
            curr=curr->next;
            dist++;
        }
        if(sd.size()==0) return {-1,-1};
        
        for(int i=1;i<sd.size();i++){
            mn=min(mn,sd[i]-sd[i-1]);
        }
        mx=sd[sd.size()-1]-sd[0];
        if(mn==INT_MAX) return {-1,-1};
    return {mn,mx};
    }
};