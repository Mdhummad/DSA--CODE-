/* ARRAY IMPLEMENTATION*/

//  #include<iostream>
//  using namespace std;
//  class stack{
//     public:
//     int arr[5];
//     int idx;
//  stack(){
//     idx=-1;
//  }

// void push(int val){
//     if(idx==sizeof(arr)/sizeof(arr[0])-1){
//         cout<<":stack is full !"<<endl;
//         return;
//     }
//     idx++;
//     arr[idx]=val;
// }
// void pop(){
//     if(idx==-1){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     idx--;
// }
// int top(){
//     if(idx==-1){
//         cout<<"stack is empty"<<endl;
//         return-1;
//     }
//     return arr[idx];
// }
// int size(){
//     return idx+1;
// }

// void display(){
//     for(int i=0;i<=idx;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


//  };
//  int main(){
//    stack st;
//    st.push(10);
//    st.push(20);
//    st.push(30);
//    st.push(40);
//    st.push(50);
//    st.push(60);
//    cout<<st.size();
//     return 0;
//  }

// ====================================================================================
/*VECTOR IMPLEMENTATION*/
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  class stack{
//     public:
//     vector<int> v;
//  stack(){
//  }

// void push(int val){
// v.push_back(val);
// }
// void pop(){
//     if(v.size()==0){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     v.pop_back();
// }
// int top(){
//     if(v.size()==0){
//         cout<<"stack is empty"<<endl;
//         return-1;
//     }
//     return v.size()-1;
// }
// int size(){
//     return v.size();
// }


//  };
//  int main(){
//    stack st;
//    st.push(10);
//    st.push(20);
//    st.push(30);
//    st.push(40);
//    st.push(50);
//    st.push(60);
//    cout<<st.size();
//     return 0;
//  } 

// ====================================================================================
/*VECTOR IMPLEMENTATION*/
 #include<iostream>
 using namespace std;
 class Node{   //LINK LIST NODE 
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
 class stack{
    public:
    Node* head;
    int size;
    stack(){
        head==NULL;
      size=0;
    }

 void push(int val){
    Node* temp=new Node(val);
   temp->next=head;
   head=temp;
   size++;
 }   

 void pop(){
    if(head==NULL){
        cout<<"stack is empty"<<endl;
        return;
    }
 head=head->next;
 size--;

}
int top(){
    if(head==NULL){
        cout<<"stack is empty"<<endl;
        return-1;
    }
    return head->val;
}

void display(){
    Node*temp=head;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void print(Node* temp){
    if(temp==NULL)return;
    print(temp->next);
    cout<<endl;
}

void displayrec(){
    Node*temp=head;
print(temp);
  cout<<endl;
}

   };
 int main(){
    stack st;
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
   st.display();
      st.displayrec();
    return 0;
 } 