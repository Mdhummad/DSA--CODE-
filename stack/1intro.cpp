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

int main(){
stack<int> st;
cout<<st.size()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

// lec1
// cout<<st.size()<<endl;
// st.pop();
// cout<<st.size()<<endl;
// cout<< st.top();
// cout<<endl;
// cout<<endl;
// ====================================================================
// printing in reverse order --->>emptying the stack
// while(st.size()>0){
//     cout<<st.top()<<" ";
//     st.pop();
// }
// =================================
// cout<<endl;
// cout<<endl;
// // we will use extra stack
// stack<int>temp;
// while(st.size()>0){
//     cout<<st.top()<<" ";
//       temp.push(st.top());
//     st.pop();
   
// }

// // putting element back from temp to st
// while(temp.size()>0){
//     st.push(temp.top());
//     temp.pop();
//     }

// cout<<endl;
// cout<<endl;
// cout<<st.top();
// }

// ==================================================================
//reversing element in the same stack using 3 stacks
print(st);
stack<int>temp;
while(st.size()>0){
      temp.push(st.top());
    st.pop();
   
}
stack<int>temp2;
while(temp.size()>0){
    temp2.push(temp.top());
    temp.pop();
   
}
while(temp2.size()>0){
    st.push(temp2.top());
    temp2.pop();
    }
cout<<endl;
print(st);


}


//we can also reverse using a array
