// LEETCODE

// 203->very important
// 876

// ===========================================================================================================
//middle of a linklist

/*
 ListNode* middleNode(ListNode* head) {

        int count = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        int mid = count / 2;
        
    temp=head;
    int initial=0;
    while(temp!=nullptr & initial<mid){
temp=temp->next;
initial++;

    }
return temp;


        temp = head;
        for(int i = 0; i < mid; i++){
            temp = temp->next;
        }

        return temp;
*/


// OPTIMAL APPROACH
// TORTOISE METHOD
/*
ListNode* slow=head;
ListNode* fast=head;

while(fast!=nullptr && fast->next!=nullptr){
slow=slow->next;
fast=fast->next->next;
}
return slow;
    */
// ===================================================================================================

// REVERSE A LINKED LIST

// reversing just the data

 
/*
Node* reverse_only_data(Node* head){

Node*temp=head;
stack<int> st;

while(temp!=nullptr ){

st.push(temp->data);
temp=temp->next;

}
node*temp2=head;
while(!st.empty()){

temp2->data=st.top();
st.pop();
temp2=temp2->next;
}

return head;
}

*/



// ====================================
// reversing a node(iterative)

/*
 class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev =nullptr;

        while(temp!=nullptr){
            ListNode*  front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;


        }
        
        return prev;


    }
};
*/

// =========================================
// recursive reversal 
// IT IS VERY IMPORTANT AND EASY TO UNDERSTAND
// DO IT FROM STRIVER

// Node* reverse_linked_list_recursive(ListNode* head){
//     if(head==NULL || head->next==nullptr )return head;

//     ListNode* newhead=reverse_linked_list_recursive(head->next);
//     ListNode* front=head->next;
//     front->next=head;
//     head->next=NULL;
//     return newhead;    
// }





// ==================================================================================================================================

// detect a loop in linked list

// using hashmap

/*
bool detect_loop(Node* head) {
    map<Node*, int> hashed;  // map to track visited nodes

    Node* temp = head;
    while (temp != NULL) {
        // if already visited → loop exists
        if (hashed.find(temp) != hashed.end()) {
            return true;
        }

        // mark this node as visited
        hashed[temp] = 1;

        temp = temp->next;
    }
    return false;
}

*/



//USING TORTOISE METHOD
/*
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

*/

// IF FAST POINTER MOVE 3 TIMES
// If fast moves 3 steps, loop detection might still work, but it’s less reliable because of leapfrogging.


//cycle 2 leetcode 142

/*
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
       
    }\
// QUES:HOW ARE SO SURE THAT THEY WILL COLLIDE AND HOW ARE YOU SO SURE THAT THE COLLISION POINT WILL BE THE START?
// ANS://SEE





    //similar question
// FIND DUPLICATE NUMBERS

// ==================================================================================================================================

*/

// FIND LENGTH OF LOOOP IN LINKED LIST

// BRUTE FORCE

/*
int length_of_linked_list_cycle(Node* head) {
    map<Node*, int> hashed;   // stores the time step (position) when node was first visited
    int timer = 1;
    Node* temp = head;

    while (temp != NULL) {
        // if we have seen this node before → cycle detected
        if (hashed.find(temp) != hashed.end()) {
            int value = hashed[temp];   // this gives the keyyyy and put the value of key in integer key
            return timer - value;       // cycle length
        }

        // mark this node with current time step
        hashed[temp] = timer;
        timer++;
        temp = temp->next;
    }

    return 0;  // no cycle found
}

// ============================================================================
// TORTOISE METHOD

int findlength(Node*slow,Node* fast){
int cnt=1;
fast=fast->next;
while(slow!=fast){
cnt++;
fast=fasst->next;
}
}



 int hasCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast !=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast)return findlength(slow,fast);
    }
    return 0;
    }





}

*/

// ========================================================================================================================
//  check if linked list is pallindrome


// 1 DO IT USIING STACK


/*

ListNode* reverse_linked_list(ListNode* head){
    if(head==NULL || head->next==nullptr )return head;

    ListNode* newhead=reverse_linked_list(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;    
}


    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==nullptr)return true;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }

ListNode* newhead=reverse_linked_list(slow->next);

ListNode* first=head;
ListNode* second=newhead;

while(second!=NULL){
if(first->val!=second->val){
    reverse_linked_list(newhead);
    return false;
}

first=first->next;
second=second->next;


}
reverse_linked_list(newhead);
return true;

        
    }
};

*/

// =========================================================================================================================

// GROUP ODD INDEX NODES AND EVEN INDEX NODES

// USING A VECTOR

/*

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;    

    vector<int> list;
    ListNode* temp = head;


    while (temp != nullptr && temp->next != nullptr) {
        list.push_back(temp->val);
        temp = temp->next->next;
    }
    if (temp != nullptr) list.push_back(temp->val); 

    
    ListNode* temp2 = head->next;
    while (temp2 != nullptr && temp2->next != nullptr) {
        list.push_back(temp2->val);
        temp2 = temp2->next->next;
    }
    if (temp2 != nullptr) list.push_back(temp2->val); 

    
    temp = head;
    for (int i = 0; i < list.size() && temp != nullptr; i++) {
        temp->val = list[i];
        temp = temp->next;
    }

    return head;
// ======================================================================================
    if (head == nullptr || head->next == nullptr) {
        return head;   
    }


ListNode* odd=head;
ListNode* even=head->next;
ListNode* even_head=head->next;

while(even!=nullptr && even->next!=nullptr){
    odd->next=odd->next->next;
    even->next=even->next->next;

    odd=odd->next;
    even=even->next;

}
odd->next=even_head;
return head;
}

};

*/

// ========================================================================================================================

// REMOVE NTH NODES

//    ListNode* removeNthFromEnd(ListNode* head, int n) {
// if(head==nullptr ||head->next==nullptr)return nullptr;

//         ListNode* slow = head;
//         ListNode* fast = head;
//         int count=0;
        // while(fast!=nullptr && count<n ){
        //     fast=fast->next;
        //     count++;
        // }
//  
// while(fast!=nullptr && fast->next!=nullptr){
//     fast=fast->next;
//     slow=slow->next;
// }

// ListNode* delnode=slow->next;
// slow->next=slow->next->next;
// delete delnode;
// return head;





// ==================================================================================================
// delete middle of linked list

//  ListNode* deleteMiddle(ListNode* head) {

//         if (head == nullptr || head->next == nullptr) return nullptr;

//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         fast=fast->next->next;
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         ListNode* toDelete = slow->next;
//         slow->next = slow->next->next;
//         delete toDelete;

//         return head;
//     }

// -===================================================================================================

// sorting alinked list


ListNode* merge(ListNode* a, ListNode* b){

ListNode* dummy=new ListNode(-1);
ListNode* temp=dummy;
while(a!=nullptr && b!=nullptr){
    if(a->val>=b->val){
        temp->next=b;
        b=b->next;
        temp=temp->next;
    }
    else{
         temp->next=c;
        c=c->next;
        temp=temp->next;
    }
}
if(a!=nullptr){
    temp->next=a;
}
else{
    temp-next=b;
}
return dummy->next;

}


    ListNode* sortList(ListNode* head) {
    if(head==nullptr || head->next==nullptr)return head;

    ListNode* fast=head;
    ListNode* slow=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode* left=head;
    ListNode* right=slow->next;
    slow->next=nullptr;
    
    
    left= sortList(left);
    right= sortList(right);
    
    ListNode* c=merge(left,right);


    return c;
    }

// ==============================================================================================================
// sort a linked list 0's 1's and  2's

/*
FIRST APPROACH IS TO COUNT 1, 2 AND 3 AND THEN REALLOTE AVLUES IN LINKED LIST

THEN THE OPTIMAL APPROACH WILL BE TO TO ITERATE VIS ASTARTING AND MAKE 3 HEADS AND THEN JOIN 0,1 AND 2 ON THESE

node* sort(node* root){
if(root==nullptr ||head->next==nullptr)return root;
node* zero_head=new node(-1);
node* one_head=new node(-1);
node* two_head=new node(-1);

node* zero=zero_head;
node* one=one_head;
node* two=two_head;

node* temp=head;

while(temp!=nullptr){
if(temp->val==0){
zero->next=temp
zero=zero->next;
temp=temp->next;
}
else if(temp->val==1){
one->next=temp;
one=one->next;
temp=temp->next;
}

else{
two->next=temp;
two=two->next;
temp=temp->next;
}
}


zero->next=(one_head->next)?one_head->next:two_head->next
one->next=two_head->next;
two->next=null

node* newhead=zero_head->next;

delete zero_head;
delete one_head;
delete two_head;

return newhead;




}


*/


// ================================================================================

// find intersection of linked list

// most brute approach
// USING HASHING

/*
node* is_intersection(node* head1, node* head2){
map<node*,int> hashedfnc

node* temp=head1;
while(temp!=nullptr){
hashedfnc[temp]=1
temp=temp->next;
}

node* temp2=head2;
while(temp!=nullptr){

if(hashedfnc.find(temp)!=hashedfnc.end()){
return temp;
}
hashed[temp]=2;

}

return nullptr;
}

*/



// OPTIMIZED

/*
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

*/

// ============================================================================================
// add 1 to a linked list


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list
ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

ListNode* add_1_to_ll(ListNode* head) {
    if (!head) return nullptr;

    // Step 1: reverse the list
    head = reverse(head);

    ListNode* temp = head;
    int carry = 1; // since we need to add 1 initially

    // Step 2: add 1 and propagate carry
    while (temp != nullptr && carry > 0) {
        int sum = temp->val + carry;
        temp->val = sum % 10;
        carry = sum / 10;

        // move to next node
        if (temp->next == nullptr && carry > 0) {
            // if carry remains at last node, create new node
            temp->next = new ListNode(carry);
            carry = 0;
        }
        temp = temp->next;
    }

    // Step 3: reverse again to restore original order
    head = reverse(head);

    return head;
}

// ===========================================================================================
class Solution {
public:

    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp!=nullptr){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry=0;

        while(temp1!=nullptr && temp2!=nullptr){
            int total = temp1->val + temp2->val + carry;
            int sum = total % 10;
            carry = total / 10;

            ListNode* temp3 = new ListNode(sum);
            curr->next = temp3;
            curr = curr->next;

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1!=nullptr){
            int total = temp1->val + carry;
            int sum = total % 10;
            carry = total / 10;

            ListNode* temp3 = new ListNode(sum);
            curr->next = temp3;
            curr = curr->next;

            temp1 = temp1->next;
        }

        while(temp2!=nullptr){
            int total = temp2->val + carry;
            int sum = total % 10;
            carry = total / 10;

            ListNode* temp3 = new ListNode(sum);
            curr->next = temp3;
            curr = curr->next;

            temp2 = temp2->next;
        }

        if(carry>0){
            ListNode* temp3 = new ListNode(carry);
            curr->next = temp3;
            curr = curr->next;
        }

        return dummy->next;
    }
};

// ========================================================================================================
// BELOW ALL IS MY OWN PRACTISE   














// ==========================================================================================================
// SWAPPING NODE IN A LINKED LIST

class Solution {
public:

ListNode* find_kth_node(ListNode* head,int k){
ListNode* temp=head;
int count =1;
while(temp!=nullptr && count<k){
temp=temp->next;
count++;

}
return temp;

}

ListNode* find_kth_node_last(ListNode* head,int k){
ListNode* fast=head;
ListNode* slow=head;
int count =1;
while(fast!=nullptr && count<k){
    fast=fast->next;
    count++;
}


while(fast!=nullptr && fast->next!=nullptr ){
fast=fast->next;
slow=slow->next;

}
return slow;

}


    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* kthnode=find_kth_node(temp,k);
        ListNode* lastkthnode=find_kth_node_last(temp,k);

        swap(kthnode->val,lastkthnode->val);
        return head;
    }
};

// ===================================================================================================
    ListNode* swapPairs(ListNode* head) {
if(head==nullptr || head->next==nullptr){
    return head;
}

ListNode* temp=head->next;
head->next=swapPairs(head->next->next);
temp->next=head;
    return temp;    
    }
//=================================================================================================
// reverse node in even group

// ==================================================================================================
  ListNode* partition(ListNode* head, int x) {
        ListNode* lo =new ListNode(100);
        ListNode* hi =new ListNode(100);
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
    }



// ==========================================================================================================================================

// LEETCODE 1669
 ListNode* first(ListNode* list1,int a){
        ListNode* temp=list1;
        int val=1;
        while(temp!=nullptr && val<a){
            temp=temp->next;
            val++;
        }
        return temp;
    }

    ListNode* last(ListNode* list1,int b){
        ListNode* temp=list1;
        temp=temp->next;
        int val=0;
        while(temp!=nullptr && val<b){
            temp=temp->next;
            val++;
        }
return temp;
    }


    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* find_a_min_1=first( list1,a);
        ListNode* find_b_plus_1=last( list1,b); 
        ListNode* temp=list2;
        while(temp!=nullptr && temp->next!=nullptr){
            temp=temp->next;
        }

        find_a_min_1->next=list2;
        temp->next=find_b_plus_1;
        return temp1;
        
           }