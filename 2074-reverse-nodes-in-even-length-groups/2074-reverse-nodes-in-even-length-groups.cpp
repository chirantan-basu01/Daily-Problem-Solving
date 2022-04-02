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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        vector<ListNode*>arr;
        auto node=head;
        
        while(node){
            arr.push_back(node);
            node=node->next;
        }
        
        int idx=0;
        int group=1;
        
        while(idx<arr.size()){
            int offset=min(idx+group,(int)arr.size());
            
            if((offset-idx)%2==0){
                reverse(arr.begin()+idx,arr.begin()+offset);
            }
            idx+=group;
            ++group;
        }
        
        for(int i=1;i<arr.size();i++){
            arr[i-1]->next=arr[i];
        }
        arr.back()->next=NULL;
        return arr[0];
    }
};