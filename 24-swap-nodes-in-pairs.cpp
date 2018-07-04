class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *ret = NULL, *cur = head;
        ListNode **insert = &ret;

        while (cur != NULL)
        {
            ListNode *node = cur;
            if (node->next != NULL)
            {
                cur = (node->next)->next;
                *insert = node->next;
                (node->next)->next = node;
                insert = &(node->next);
                *insert = NULL;
            }
            else
            {
                *insert = node;
                return ret;
            }
        }

        return ret;
    }
};

