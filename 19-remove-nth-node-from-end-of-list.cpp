class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode **d = &head, *p = head;

        while (n--) p = p->next;

        while (p != NULL)
        {
            p = p->next;
            d = &((*d)->next);
        }

        p = (*d)->next;
        delete *d;
        *d = p;

        return head;
    }
};

