class Solution
{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode **cur = &head;
        while (*cur != nullptr)
        {
            ListNode *next = (*cur)->next;
            while (next != nullptr && (*cur)->val == next->val)
                next = next->next;

            if ((*cur)->next != next)
            {
                while ((*cur)->next != next)
                    *cur = (*cur)->next;

                *cur = next;
            }
            else
            {
                cur = &((*cur)->next);
            }
        }

        return head;
    }
};

