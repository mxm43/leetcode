class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != nullptr)
        {
            if (slow == fast)
                return true;

            slow = slow->next;
            if (fast->next != nullptr)
                fast = fast->next->next;
            else
                return false;
        }

        return false;
    }
};

