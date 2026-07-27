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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        while(true){  
                ListNode* end = prev;  
                int c=0;
                while (c<k && end){
                    end = end->next;
                    c++;
                } 

                if(!end)
                    break;  
                ListNode *cur = prev->next;
                ListNode* nxt = cur->next;
                ListNode* stop = end->next;  

                while(nxt!=stop){  
                    cur->next = nxt->next;  
                    nxt->next = prev->next;  
                    prev->next = nxt;  
                    nxt = cur->next;  
                }  
                prev = cur;  
            }  
    return dummy.next;  
    }
};