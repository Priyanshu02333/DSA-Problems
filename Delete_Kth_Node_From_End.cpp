/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Finding Length of LL
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        // edge case: if the head needs to be deleted
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        // resetting temp to head
        temp = head;
        // stop (n + 1) nodes before the target node
        int stop = cnt - n - 1;
        while (stop > 0) {
            stop--;
            temp = temp->next;
        }
        // delete the target node
        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        return head;
    }
};
