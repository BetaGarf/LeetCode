class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1);//创建头结点
        ListNode *h = head;
        int sum = 0;
        bool carry = false;
        while(l1 != NULL || l2 != NULL){
            sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            if(carry){
                sum++;
            }
            h->next = new ListNode(sum%10);
            h = h->next;
            carry = sum >= 10? true:false;
        }
        if(carry){
            h->next = new ListNode(1);
        }
        return head->next;
    }
};
