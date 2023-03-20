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
    ListNode* removeElements(ListNode* head, int val) {
        auto finder = head, resultHead = new ListNode(), tail = resultHead;
        if (!head) goto exit;
        while(finder){
            if (finder->val != val){
                tail->next = new ListNode(finder->val); tail = tail->next;
            }
            finder = finder->next;
        }

        exit:
            return resultHead->next;
    }
};
