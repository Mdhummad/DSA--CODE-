/*  WHY LINKLIST OVER ARRAYS 
1) fixed size ,there is problem in vector too
2) contiguos memory allocation==>it is also a problem it has advantage tooss==>see disadvantage
*/ 




#include<iostream>
using namespace std;
class Node{   //LINK LIST NODE 
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};

/*
struct node{
int data;
node* next;
node(int val,node* next1){
data=val;
next=next1;
}
};
Struct does not provide oops functionalities thats why we usually use class


*/




int main(){
Node a(10);
Node b(20);
Node c(30);
Node d(40);
// FORMING LINKLIST
a.next =&b;
b.next =&c;
c.next =&d;
cout<<a.next<<endl;
cout<<&a<<endl;
// IN THE ABOVE WE ARE GETTING GARBAGE VALUES SO WE WANT IT TO HAVE NULL
// SO,FOR THAT WE CAN USE THE CODE BELOW BUT THAT WOULD BE NOT GOOD , SO USE  "this->next=NULL;" IN  CONSTRUCTER
// a.next =NULL;
// b.next =NULL;
// c.next =NULL;
// d.next =NULL;


// SO NOW VIA LINKLIST WE CAN MODIFY b WITHOUT USING a and also print it
// ===============================================================
Node* ptr=&b;
(*ptr).val=89;
ptr->val=90;
cout<<(*ptr).val;

// ===============================================================
// ===============================================================
cout<<(*(a.next)).next<<endl;//c ka adress
cout<<b.next<<endl;//c ka adress
cout<<(*(a.next)).val<<endl;//{ *(a.next) OR a.next-> } means b  ||a.next means &b 
a.next->val=70;
cout<<(a.next)->val<<endl;

// ===============================================================
// to print value of d from a
// cout<<*(*(*(a.next).next).next).val;
cout<<(((a.next)->next)->next)->val;

// ===============================================================
// TO PRINT WHOLE LINKLIST 
cout<<endl;
cout<<endl;
Node temp=a;//iska mtlb isme a ki value and a ke andar jo b ka adress hota hai dono hai pr iska address a se diff hai
while(1){
    cout<<temp.val<<" ";
    if(temp.next==NULL) break;
    temp=*(temp.next);
    /*
    temp.next is equal to &b   ==>address of b
      *(temp.next)=b
    usme agar deference operator lgao to uska matlab temp=b */
}
    return 0;
}