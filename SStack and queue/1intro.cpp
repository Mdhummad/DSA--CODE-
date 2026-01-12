
// reversinga stack without using any extra data structure

void insertAtBottom(stack<int> &s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(top);
}

void reverseStack(stack<int> &s) {
    if (s.empty()) return;

    int top = s.top();
    s.pop();
    reverseStack(s);          // reverse remaining stack
    insertAtBottom(s, top);   // insert top at bottom
}
// ====================================================================
// reversing a stack using a extra stack
// while(st.size()>0){
//     cout<<st.top()<<" ";
//     st.pop();
// }
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
// print(st);
// stack<int>temp;
// while(st.size()>0){
//       temp.push(st.top());
//     st.pop();
   
// }
// stack<int>temp2;
// while(temp.size()>0){
//     temp2.push(temp.top());
//     temp.pop();
   
// }
// while(temp2.size()>0){
//     st.push(temp2.top());
//     temp2.pop();
//     }
// cout<<endl;
// print(st);



// ============================================
//we can also reverse using a array
// =========================================

// ====================================================================
// REVERSING A QUEUE 
void reverseQueue(queue<int> &q) {
    stack<int> st;

    // Step 1: push queue elements into stack
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: pop stack elements back into queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

// WITHOUT EXTRA SPACE
void reverseQueueRec(queue<int> &q) {
    if (q.empty()) return;

    int x = q.front();
    q.pop();
    reverseQueueRec(q);
    q.push(x);
}
// =============================================================
// REVERSING A QUEUE AND STACK UPTO K PLACES