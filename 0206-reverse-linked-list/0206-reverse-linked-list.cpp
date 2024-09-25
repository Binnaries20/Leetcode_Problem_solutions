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
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* back=NULL;

        while(current!=NULL){
            ListNode* temp=current->next;
            current->next=back;
            back=current;
            current=temp;
        }
        return back;
        // vector<int> arr;
        // ListNode *temp = head;
        
        // while(temp!=NULL)
        // {
        //     arr.push_back(temp->val);
        //     temp=temp->next;
        // }

        // int size = arr.size()-1;
        // temp = head;
        // while(temp)
        // {
        //     temp->val = arr[size];
        //     size--;
        //     temp = temp->next;
        // }
        
        // return head;
    }
};