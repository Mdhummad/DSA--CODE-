/*
INTERSECTION OF TWO LINK LIST
LEETCODE 160 */

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int lenA = 0;
        while (tempA != NULL) {
            lenA++;
            tempA = tempA->next;
        }

        int lenB = 0;
        while (tempB != NULL) {
            lenB++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        if (lenA > lenB) {
            int diff = lenA - lenB;
            for (int i = 0; i < diff; i++) {
                tempA = tempA->next;
            }
        } else {
            int diff = lenB - lenA;
            for (int i = 0; i < diff; i++) {
                tempB = tempB->next;
            }
        }

        while (tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA;
    }
};

*/

// ==========================================================================
/* linked list cycle
ques 141*/
/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast !=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast)return true;
    }
    return false;
    }
};
*/

// ==========================================================================
/* linked list cycle
ques 142  
*/
/*

/*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    bool flag=false;//indicating no cycle is present
    while(fast !=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=true;
            break;
        }
        }
        if(flag==false)return NULL;
        else{
        ListNode* temp=head;
        while(slow !=temp ){
        temp=temp->next;
        slow=slow->next;
        }
        return slow;  
        }
       
    }
};*/


// ================================================================================

/*leetcode 83*/

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL || head->next==NULL)return head;
//        ListNode* a=head;
//        ListNode* b=head->next;

//        while(b != NULL){
//         while(b != NULL && b->val==a->val){
//             b=b->next;
//         }
//         a->next=b;
//         a=b;
//         if(b != NULL)b=b->next;
//        }    
//     return head;
//     }
// };


// ==========================================================================
/* LEETCODE 61*/


/*

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // FIND THE LENGTH OF THE LIST
        if(head==0 || head->next==NULL) return head;
        int n=0;//n is length
        ListNode* temp=head;
        ListNode* tail=NULL;
    while(temp!=NULL){
    if(temp->next==NULL)tail=temp;
    temp=temp->next;
    n++;
     }
     k=k%n;
     if(k==0)return head;
    //  NOW we need to place temp at (n-k)th position.
    temp=head;
    for(int i=1;i<n-k;i++){
    temp=temp->next;
    }
    tai->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
    }
};

// ============================================================================================
// LEETCODE 21
// THIS CODE IS FOR SPACE COMPLEXITY==O(m+n)

/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* tempa=a;
    ListNode* tempb=b;
    ListNode* c=new ListNode(-1);
    ListNode* tempc=c;
    
    while(tempa!=NULL && tempB!=NULL){
    if(tempa->val <= tempb->val){
    ListNode *t =new ListNode(tempa->val);
    tempc->next=t;
    tempc=t;
    tempa=tempa->next;
    }
    else{
    ListNode *t =new ListNode(tempb->val);
    tempc->next=t;
    tempc=t;
    tempb=tempb->next;
 }
    }
if(tempa==NULL){
tempc->next=tempb;
}
else{
tempc->next=tempa;
}
return c->next;
    }
};


 */


// ===============================
/*
//SECOND METHOD
TIME COMPLEXXITY=====O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        listNode *c= new ListNode(-1);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
        temp->next=a;
        a=a->next;
        temp=temp->next;}
        else{
        temp->next=b;
        b=b->next;
        temp=temp->next;
        }
         }
    if(a==NULL)temp->next=b;
    else temp->next=a;
    return c->next;    
    }
};


*/

//==============================================================================
/* LEETCODE -23*/
/*
class Solution {
public:
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        listNode *c= new ListNode(-1);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
        temp->next=a;
        a=a->next;
        temp=temp->next;}
        else{
        temp->next=b;
        b=b->next;
        temp=temp->next;
        }
         }
    if(a==NULL)temp->next=b;
    else temp->next=a;
    return c->next;    
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(arr.size()==0)return NULL;
         while(arr.size()>1){
         ListNode* a=arr[0];
         arr.erase(arr.begin());
         ListNode* b=arr[0];
         arr.erase(arr.begin());
         ListNode* c=merge(a,b);
         arr.push_back(c);
         }
         return arr[0];
    }
};

// 1 MORE SOLUTION IS PRESENT BUT TIME COMPLEXITY OF THAT CODE IS MORE 
// IT HAS BEEN WRITTEN IN NOTES

*/


// ==================================================================================================
/* LEETCODE 148*/
/*
class Solution {
public:
ListNode* merge(ListNode* a, ListNode* b) {
        ListNode *c= new ListNode(-1);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
        temp->next=a;
        a=a->next;
        temp=temp->next;}
        else{
        temp->next=b;
        b=b->next;
        temp=temp->next;
        }
         }

    ListNode* sortList(ListNode* head) {
      if(head==NULL || head->next==NULL)return head;
    // to find the lefft middle
    ListNode* slow=head;
    ListNode* fast=heaad;
    while(fast->next!=NULL && fast->next->next!=NULL){
    slow=slow->next;
    fats=fast->next->next;
    }
// now slow is at left middle
ListNode* a=head;
ListNode* b=slow->next;
slow->next=NULL;
a=sortlist(a);
b=sortlist(b);
ListNode* c=merge(a,b)
return c;
    }
};
*/
// ==========================================================================
/* LEETCODE-86*/
/*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo =new ListNode(100);
        ListNode* hi =new ListNode(340);
        ListNode* templo =lo;
        ListNode* tempHi =hi;
        ListNode* temp =head;
        while(temp!=NULL){
        if(temp->val<x){
        templo->next=temp;
        temp=temp->next;
        templo=templo->next;
        }
    else{
        tempHi->next=temp;
        temp=temp->next;
        tempHi=tempHi->next;
    }
}
templo->next=hi->next;
tempHi->next=NULL;
return lo->next;
};




*/
