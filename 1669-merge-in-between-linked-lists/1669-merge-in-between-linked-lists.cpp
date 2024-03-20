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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * head=list1;
        ListNode * head2=list2;
        ListNode * tail2=list2;
        while(tail2->next!=nullptr) tail2=tail2->next;
        int cnt=0;
        while(cnt!=(a-1)){
            head=head->next;
            cnt++;
        }
        ListNode * tail1=head->next;
        head->next=list2;
        while(cnt!=b){
            tail1=tail1->next;
            cnt++;
        }
        tail2->next=tail1;
        return list1;
    }
};