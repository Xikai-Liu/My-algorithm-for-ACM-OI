/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *ans=new ListNode(-1);
        ans->next=head;
        for (ListNode *h1=ans,*h2=head;h2 &&h2->next;h1=h2,h2=h2->next){
            h1->next=h2->next;
            h2->next=h1->next->next;
            h1->next->next=h2;
        }
        return ans->next;
    }
};
