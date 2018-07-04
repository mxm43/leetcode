class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *l = NULL, *r = NULL;
        ListNode **lp = &l, **rp = &r;

        while (head != NULL)
        {
            ListNode ***cur = head->val < x ? &lp : &rp;

            *(*cur) = head;
            head = head->next;
            *cur = &((*(*cur))->next);
        }

        *rp = NULL;
        *lp = r;

        return l;
    }
};

