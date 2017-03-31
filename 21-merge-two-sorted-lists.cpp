class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode  *ret = NULL;
        ListNode **cur = &ret;

        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                *cur = l1;
                l1 = l1->next;
            }
            else
            {
                *cur = l2;
                l2 = l2->next;
            }
            cur = &((*cur)->next);
        }
    
        if (l1 == NULL)
            *cur = l2;
        else
            *cur = l1;

        return ret;
    }
};

