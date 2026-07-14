class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;

        ListNode* count = l1;
        int lenL1 = 0;
        while (count!=NULL) {
            lenL1++;
            count = count->next;
        }
        count = l2;
        int lenL2 = 0;
        while(count!=NULL){
            lenL2++;
            count = count->next;
        }
        if(lenL2>lenL1){
            return addTwoNumbers(l2, l1);
        }
        
        int carry = 0;
        while(p!=NULL && q!=NULL){
            int sum=p->val + q->val +carry;
            p->val=sum%10;
            carry=sum/10;
            p = p->next;
            q = q->next;
        }
        
        while(p!=NULL){
            int sum = p->val + carry;
            p->val = sum%10;
            carry =sum/10;
            p=p->next;
        }
        
        if(carry == 1){
            ListNode* tail = new ListNode();
            tail->val = 1;
            count = l1;
            
            while (count->next!=NULL) {
                count = count->next;
            }
            count->next = tail;
        }
    return l1;
    }
};