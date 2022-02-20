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
    ListNode* mergeNodes(ListNode* head) {
        if(!head->next) 
            return nullptr;
        
        ListNode* current=head->next;
        int sum=0;
        
        while(current->val!=0){
            sum+=current->val;
            current=current->next;
        }
        head->next->val=sum;
        head->next->next=mergeNodes(current);
        
        return head->next;
    }
};