#include<iostream>
using namespace std;
class Node{   //LINK LIST NODE 
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void display(Node* head){
while(head){
cout<<head->val<<" ";
head=head->next;
}
}



void displayrev(Node* tail){
while(tail){
cout<<tail->val<<" ";
tail=tail->prev;
}
}




class DLL{   //user defined data structure 
public:
    Node* head;
    Node* tail;
    int size=0;
    DLL(){

        head=tail=NULL;
        size=0;
     }

 void insertatend(int val){
    Node* temp =new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
 }  


 void insertatbegin(int val){
    Node* temp =new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head->prev=temp;  
        head=temp;
    }
    size++;
 } 


 void insertatidx(int idx,int val){
    if(idx<0 || idx > size)cout<<" invalid index "<<endl;
    else if(idx==0)insertatbegin(val);
    else if(idx==size)insertatend(val);
   else{
    Node* t =new Node(val);
    Node* temp=head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    t->prev=temp;
    temp->next->prev=t;
    size++;
   } 
     }
    
 
 
 void display(){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
 } 

};





int  main(){
    DLL list;
    list.insertatend(10);
    list.insertatbegin(10);
    list.insertatend(10);
    list.insertatbegin(10);
    list.insertatidx(10,3);
    list.display();

    return 0;
}



















// ====================================================================
//QUESTION

// 1. DELETE ALL OCCURENCE OF A KEY IN A DLL

node* delete_all_occurences(node* root){
node* temp=head;
if(head==nullptr )return nullptr;

while(temp!=nullptr){


    if(head->val==val){
    if(temp==head){
    
        node* temp1=head;
    head=head->next;
    delete temp1;}


node* nextnode=temp->next;
node*prevnode=temp->prev;
if(nextnode!=nullptr)nextnode->prec=prevnode;
if(prevnode!-nullptr)prevnode->next=nexttnode;   

delete(temp);

temp=nextnode;

    }
    else{
        temp=temp->next;
    }

return head;
}


}

// =============================================================================
// FIND PAIR WITH THE GIVEN SUM IN A SORTED LINKED LIST


vector<pair<int,int>> find_pairs(node* head, int data) {
    vector<pair<int,int>> ans;
    if (head == nullptr || head->next == nullptr) 
        return ans;

    // find tail
    node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    node* left = head;
    node* right = tail;

    while (left != nullptr && right != nullptr && left != right && right->next != left) {
        int sum = left->val + right->val;
        if (sum == data) {
            ans.push_back({left->val, right->val});
            left = left->next;
            right = right->prev;
        } 
        else if (sum > data) {
            right = right->prev;
        } 
        else {
            left = left->next;
        }
    }

    return ans;
}