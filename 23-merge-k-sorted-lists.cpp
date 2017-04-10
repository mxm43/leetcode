class Solution
{
public:
    struct cmp
    {
        bool operator()(ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        priority_queue<ListNode *, vector<ListNode *>, cmp> q;
        ListNode  *ret = NULL;
        ListNode **cur = &ret;

        for (auto node : lists)
            if (node != NULL)
                q.push(node);

        while (!q.empty())
        {
            *cur = q.top();
            q.pop();

            ListNode *next = (*cur)->next;
            if (next != NULL)
                q.push(next);

            cur = &((*cur)->next);
        }

        return ret;
    }
};

