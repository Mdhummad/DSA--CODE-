/*
QUES: REMOVE ALL THE ELEMNTS PRESENT AT EVEN POSITIONS IN QUEUE CONSIDER 0 BASED INDEXING
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void removeateven(queue<int> &q){
int n=q.size();
 for(int i=0;i<n;i++){
    if(i%2==0){
        q.pop();
    }
    else {int x=q.front();
    q.pop();
    q.push(x);}
 }
/*
or
if(i%2!=0){
int x=q.front()
q.push(x);}
q.pop();
*/

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
removeateven(q);
cout<<endl;
display(q);
    return 0;

}
