/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ret_value = NULL;
        ListNode * ret_tail  = NULL;
        int carry_flag = 0;

        while (l1 != NULL || l2 != NULL)
        {
            int sum = carry_flag;
            if (l1) sum += l1->val;
            if (l2) sum += l2->val;

            carry_flag = sum / 10;
            ListNode * tmp = new ListNode(sum % 10);
            if (ret_tail != NULL)
            {
                ret_tail->next = tmp;
                ret_tail = ret_tail->next;
            }
            else
                ret_value = ret_tail = tmp;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (carry_flag)
            ret_tail->next = new ListNode(carry_flag);

        return ret_value;
    }
};
