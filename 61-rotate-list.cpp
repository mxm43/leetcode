class Solution
{
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        int n = 1;
        ListNode *ret = NULL, *tail = NULL;
        ListNode **p = &head;

        if (head == NULL)
            return NULL;

        for (tail = head; tail->next != NULL; tail = tail->next, ++n);

        if ((k = n - k % n) == 0 || k == n)
            return head;

        for (int i = 0; i < k; ++i)
            p = &((*p)->next);

        ret = *p;
        *p = NULL;
        tail->next = head;

        return ret;
    }
};

