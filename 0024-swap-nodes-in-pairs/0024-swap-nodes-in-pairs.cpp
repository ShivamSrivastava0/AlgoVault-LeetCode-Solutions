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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p = head;
        vector<int> ans;
        while(p!=NULL){
            ans.push_back(p->val);
            p = p->next;
        }

        p = head;
        for(int i=1;i<ans.size();i+=2){
            p->val = ans[i];
            p=p->next;
            p->val = ans[i-1];
            p = p->next;
        }
    return head;
    }
};