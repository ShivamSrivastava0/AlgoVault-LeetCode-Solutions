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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr = slow->next;
        slow->next = NULL; //Forgot to Split List:: Yaad rkhna hai:)
        ListNode* prev=NULL;

        while(curr){
            ListNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }

        while(prev){
            ListNode* nxt1 = head->next;
            ListNode* nxt2 = prev->next;

            head->next=prev;
            prev->next=nxt1;

            head=nxt1;
            prev=nxt2;
        }
    }
};