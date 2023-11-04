#include<string>
using namespace std;


  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {return head;}
        ListNode* temp = head;
        //temp保存head
        //head滞空
        //head.next指向head
        head = nullptr;
        temp->next = head;
        return reverseList(head->next);
        
    }
};