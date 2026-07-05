class Solution {
public:
    typedef pair<int, ListNode*> pp;

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pp, vector<pp>, greater<pp>> pq;

        for (auto node : lists) {
            if (node)
                pq.push({node->val, node});
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while (!pq.empty()) {
            auto node = pq.top().second;
            pq.pop();

            temp->next = node;
            temp = temp->next;

            if (node->next) {
                pq.push({node->next->val, node->next});
            }
        }

        return dummy->next;
    }
};