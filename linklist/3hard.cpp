class Solution {
public:
ListNode* reverselinkedlist(ListNode* head){
ListNode* temp=head;
ListNode* prev=nullptr;
while(temp!=nullptr){
    ListNode* front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
}
return prev;

}

ListNode* getkthnode(ListNode* temp,int k){
    int count=1;
    while(temp!=nullptr && count<k){
        temp=temp->next;
        count++;
    } 
return
}



    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevlast=nullptr;
        while(temp!=nullptr){
            ListNode* kthNode=getkthnode(temp,k);
            if(kthNode==nullptr){
                if(prevlast)prevlast->next=temp;
                break;
            }

ListNode* nextnode=kthNode->next;
kthNode->next=nullptr;
reverselinkedlist(temp);
if(temp==head){
    head=kthNode;
}//only one 1 iteration to make head
else{
    prevlast->next=kthNode;
}

prevlast=temp;
temp=nextnode;

        }

return head;


    }
};


// ================================================================================

Node* merge(Node* list1, Node* list2) {
    Node* dummyNode = new Node(-1);
    Node* res = dummyNode;
    while(list1 != NULL && list2 != NULL) {
        if(list1->data <= list2->data) {
            res->child = list1;
            res = list1;
            list1 = list1->child;
        }
        else {
            res->child = list2;
            res = list2;
            list2 = list2->child;
        }
    }
    res->next = NULL;

    if(list1) res->child = list1;
    else res->child = list2;
    if(dummyNode->child) dummyNode->child->next = nullptr;
    return dummyNode->child;
}

Node* flattenLinkedList(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    Node* mergedHead = flattenLinkedList(head->next);
    head = merge(head, mergedHead);
    return head;
}

 