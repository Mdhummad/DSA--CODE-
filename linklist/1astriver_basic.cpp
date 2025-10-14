/*
SEE LECTURE 1,ITS VERY EASY


*/

// CREATING A LINKED LISTT USING ARRAYS

// =====================================================================
LEETCODE 237

class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* temp=node->next;
       node->val=temp->val;
       node->next=temp->next;


    }
};

// ========================================================================






















#include<bits/stdc++.h>
using namespace std;
class Node{   //LINK LIST NODE 
public:
    int val;
    Node* next;
    Node(int val1){
        this->val=val1;
        this->next=nullptr;

        // or
        // val=val1;
        // next=nullptr
    }
};

Node* array_to_ll(vector<int>& arr){
Node* head= new Node(arr[0]); 
Node* mover=head;
for(int i=1;i<arr.size();i++){
Node* temp= new Node(arr[i]);
mover->next=temp;
mover=temp;
}
return head;
}

void print(Node* head){
Node* temp=head;
while(temp){
cout<<temp->val<<" ";
temp=temp->next;

}
}


int lengthofLL(Node* head){
int count=0;
Node* temp=head;
while(temp){
// cout<<temp->val<<" ";
temp=temp->next;
count++;

}
return count;
}


// delete 
/*
1)head
2)position
3)value
4)last

*/

Node* delete_head(Node* head){
if(head==NULL)return head;
Node* temp=head;
head=head->next;
delete temp;
return head;
}

Node* delete_tail(Node* head){
    if(head == NULL) 
        return NULL;  // empty list

    if(head->next == NULL){  
        delete head;         // free the only node
        return NULL;         // now list is empty
    }

    Node* temp = head;
    while(temp->next->next != NULL){  // stop at 2nd last node
        temp = temp->next;
    }

    delete temp->next;   // delete last node
    temp->next = NULL;   // update new tail
    return head;
}


Node* delete_pos(Node* head, int x) {
if (head == NULL) return head;
if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
int count = 1;
    Node* temp = head;
    while (temp != NULL && count < x - 1) {
        temp = temp->next;
        count++;
    }
    if (temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    return head;
}

Node* del_val(Node* head, int val1) {
    if (head == NULL) return head;

    // Case 1: head node itself needs to be deleted
    if (head->val == val1) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    // Case 2: search for node to delete
    Node* temp = head;
    while (temp->next != NULL && temp->next->val != val1) {
        temp = temp->next;
    }

    // If found, delete it
    if (temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    return head;
}


// ====================================================================================================================
// Insertion

Node* inser_at_head(Node* head,int val){
Node* temp= new Node(val);
temp->next=head;
head=temp;
return head;
}


Node* insert_at_last(Node* head, int val) {
    Node* temp = new Node(val);

    // Case 1: empty list
    if (head == NULL) {
        head = temp;
        return head;
    }

    // Case 2: traverse to the last node
    Node* pointr = head;
    while (pointr->next != NULL) {
        pointr = pointr->next;
    }

    // attach new node
    pointr->next = temp;
    return head;
}

Node* insertPosition(Node* head, int el, int k) {
    if (head == NULL) {
        if (k == 1) {
            return new Node(el);
        } else {
            return head;
        }
    }

    if (k == 1) {
        return new Node(el, head);
    }

    int crt = 0;
    Node* temp = head;
    while (temp != NULL) {
        crt++;
        if (crt == (k - 1)) {
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}
// ===============================================================================







int main(){
vector<int> arr={2,3,5,7};
// Node* y=new Node(arr[0]);
// cout<<y.val;
Node* head=array_to_ll(arr);
print(head);

cout<<endl;

int length=lengthofLL(head);
cout<<length;



}