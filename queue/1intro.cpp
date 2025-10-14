// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// queue<int> q;
// /* 
// push
// pop
// front->top
// size
// empty
// back
// */
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);
// q.push(50);
// q.push(60);
// cout<<q.front()<<endl;
// cout<<q.size()<<endl;
// q.pop();
// cout<<q.front()<<endl;
// cout<<q.size()<<endl;
//     return 0;

// }


// ====================================================================================
// NORMAL PRINTING OF A QUEUE
#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void displayrev(queue<int> &q,stack<int> st){
 int n=q.size();
// empty the queue into stack
while(q.size()>0){
    int x=q.front();
    q.pop();
    st.push(x);
    
 }  
// putting element back into queue
while(st.size()>0){
    int x=st.top();
    st.pop();
    q.push(x);
    
 }  

}


void display(queue<int> &q){
 int n=q.size();
 for(int i=0;i<n;i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
 }  
}
int main(){
queue<int> q;
stack<int> st;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
display(q);
displayrev(q,st);
cout<<endl;
display(q);
    return 0;

}
