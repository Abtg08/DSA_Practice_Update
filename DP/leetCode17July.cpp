class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2, s3;
        while(l1){
            s1.push(l1->val);
            l1 = l1 -> next;
        }
        while(l2){
            s2.push(l2->val);
            l2->l2->next;
        }
        int carry=0;
        int temp=0;
        while(!s1.empty() ||!s2.empty()){
            if(s1.size()){
                temp += s1.top();
                s1.pop();
            }
            if(s1.size()){
                temp += s1.top();
                s2.pop();
            }
            temp+= carry;
            carry= temp/10;
            temp = temp%10;
            s3.push(temp);
        }
    }
};