#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> a){
   stack<int>temp;
while(a.size()>0){
   temp.push(a.top());
    a.pop();
   }

while(temp.size()>0){
     cout<<temp.top()<<" ";
    a.push(temp.top());
    temp.pop();
    }
}


void pushatbottom(stack<int> &a,int val){
    stack<int>temp;
while(a.size()>0){
   temp.push(a.top());
    a.pop();
   }
a.push(val);
while(temp.size()>0){
    a.push(temp.top());
    temp.pop();
    }
}


void pushatindex(stack<int> &a,int val,int idx){
    stack<int>temp;
while(a.size()>idx){
   temp.push(a.top());
    a.pop();
   }
a.push(val);
while(temp.size()>0){
    a.push(temp.top());
    temp.pop();
    }
}

int main(){
stack<int> st;
cout<<st.size()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

print(st);
cout<<endl;
pushatbottom(st,90);
print(st); 
cout<<endl;
pushatindex(st,888,3);
print(st); 
}
