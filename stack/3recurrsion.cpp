// #include<iostream>
// #include<stack>
// using namespace std;
// void print(stack<int> a){
//    stack<int>temp;
// while(a.size()>0){
//    temp.push(a.top());
//     a.pop();
//    }

// while(temp.size()>0){
//      cout<<temp.top()<<" ";
//     a.push(temp.top());
//     temp.pop();
//     }
// }



// int main(){
// stack<int> st;
// cout<<st.size()<<endl;
// st.push(10);
// st.push(20);
// st.push(30);
// st.push(40);
// st.push(50);

// print(st);
 
// }

// ================================================================
#include<iostream>
#include<stack>
using namespace std;
// CODE FOR PRINTING STACK USING RECURSION IN REVERSE ORDER
// NOTE:=THE ORDER OF ELEMENT IN STACK DOES NOT CHANGE
void displayrev(stack<int> &st){
if(st.size()==0) return;
int x =st.top();
cout<<x<<" ";
st.pop();
displayrev(st);
st.push(x);

}

// CODE FOR PUSHING ELEMENT AT BOTTOM OF  STACK 
// NOTE:=THE ORDER OF ELEMENT IN STACK DOES NOT CHANGE
void pushatbottom(stack<int> &st,int val){
if(st.size()==0){
   st.push(val);
   return;}
int x=st.top();
st.pop();
pushatbottom(st,val);
st.push(x);
}

// CODE FOR CHANGING ORDER OF ELEMENT IN STACK

void reverse(stack<int> &st){
if(st.size()==1)return;
int x=st.top();
st.pop();
reverse(st);
pushatbottom(st,x);
}


int main(){
stack<int> st;
cout<<st.size()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

displayrev(st);
cout<<endl;
pushatbottom(st,100); 
displayrev(st);
reverse(st);
cout<<endl;
displayrev(st);
}
