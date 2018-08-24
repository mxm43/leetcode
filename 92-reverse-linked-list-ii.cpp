class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {
        ListNode **p = &head;
        ListNode *list = NULL, *tail = NULL;

        for (int i = 0; i < m-1; ++i) {
            p = &((*p)->next);
        }

        tail = *p;
        for (int i = 0; i < n-m+1; ++i) {
            ListNode *c = tail;
            tail = tail->next;
            c->next = list;
            list = c;
        }

        if (*p != NULL) {
            (*p)->next = tail;
            *p = list;
        }

        return head;
    }
};

