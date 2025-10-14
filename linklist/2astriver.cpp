#include<iostream>
#include<vector>
using namespace std;




class node{
public:
int data;
node* next;
node* prev;

node(int val1){
    data=val1;
    next=NULL;
    prev=NULL;
}

node(int val,node* next1 ,node* prev1)
{
    data=val;
    next=next1;
    prev=prev1;
}

};



// see there is one more way to make dll seee striver playlist
node* array_to_dll(vector<int>& arr){
int n=arr.size();
node* head=new node(arr[0]);
node* mover=head;
for(int i=1;i<n;i++){
node* temp =new node(arr[i]);
mover->next=temp;
temp->prev=mover;
mover=mover->next;
}
return head;


}


void printf(node* head){
node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}

node* delete_head_dll(node* head){
if(head==NULL)return head;

node* temp=head;

head=head->next;
head->prev=NULL;
temp->next==NULL;
delete temp;

return head;
}


node* delete_At_tail(node* head){
if(head==NULL)return head;

if(head->next==NULL){
delete head;
return head;

}
node* temp=head;
while(temp!=NULL && temp->next->next!=NULL){
temp=temp->next;
}
node* temp1=temp->next;
temp->next=NULL;
temp1->prev=NULL;
delete temp1;

return head;
}



node*delete_kth_element(node* head){



}


node* delete_val_element(node* head){


    
}




int main(){
vector<int> arr={2,3,4,5,6};
node* head= array_to_dll(arr); 
printf(head);
cout<<endl;
head=delete_At_tail(head);

printf(head);
}