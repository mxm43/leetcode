class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k <= 1 || head == NULL) return head;

        ListNode  *rest    = head;
        ListNode **reverse = &head;
        while (rest != NULL)
        {
            ListNode *node = rest;
            for (int i = 0; i < k; ++i)
            {
                if (rest == NULL)
                    return head;
                else
                    rest = rest->next;
            }

            ListNode *cur = *reverse;
            ListNode *result = NULL;
            for (int i = 0; i < k; ++i)
            {
                ListNode *next = cur->next;
                cur->next = result;
                result = cur;
                cur = next;
            }
            *reverse = result;
            node->next = rest;
            reverse = &(node->next);
        }

        return head;
    }
};

