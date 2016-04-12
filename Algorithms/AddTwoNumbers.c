/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;
    struct ListNode* p1;
    struct ListNode* p2;
    int remain = 0, carry = 0;
    p1 = p2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    while(l1!=NULL||l2!=NULL||carry){
        p1->next = NULL;
        remain += carry;
        carry = 0;
        if(l1){
        	remain += l1->val;
        	l1 = l1->next;
        }
        if(l2){
        	remain += l2->val;
        	l2 = l2->next;
        }
        if(remain >9){
            remain = remain - 10;
            carry = 1;
        }
        p1->val = remain;
        remain = 0;
        if(head ==NULL)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    }
    return head;
}
