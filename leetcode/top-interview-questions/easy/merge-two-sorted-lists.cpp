/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * 
 * Time Complexity: O(m+n)
 * where |l1| = m and |l2|=n
 *  
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==nullptr){
            return l2;
        }
        
        if(l2==nullptr){
            return l1;
        }
        
        ListNode* head;
        
        if(l1->val > l2->val){
            head = l2;
        }
        else{
            head = l1;
        }
        
        ListNode* t1=l1, *t2=l2, *t1_prev=nullptr;
        
        while(t1 && t2){
            if(t1->val > t2->val){
                ListNode* t3 = t2->next;
                t2->next = t1;
                if(t1_prev){
                    t1_prev->next = t2;
                }
                t1 = t2;
                t2 = t3;
            }
            else{
                t1_prev = t1;
                t1 = t1->next;
            }
            
        }
        
        if(t2){
            t1_prev->next = t2;
        }
        
        
        return head;
    }
};