/*

operator
^   --->highest priority
* / --->middle priority
+ - --->lowest priority

operand
A-Z
a-z
0-9

infix ==  normal expression
postfix ==  operand then operator
prefix ==  operator then operand


*/


// ========================================
// infix to postfix


string infix_to_postfix(string s){
int i=0;
string st;
string ans="";
int n=s.size();
while(i<n){
    if((s[i]>='A' && s[i]<='z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0'&& s[i]>='9')){
        ans+=ans+s[i];
    }
    else if(s[i]==')'){
        st.push(s[i]);
    }
    else if(s[i]=='('){
        while(!st.empty() && st.top()!='('){
            ans+=st.top();
            st.pop();
        }
        st.pop();
    }

    else{
        while(!st.empty() && priority[s[i]]<=priority[st.top()]){
            ans+=st.top();
            st.pop();
        }
        st.push(s[i]);
    }
i++;
}
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
return ans;
}

// ==================================
// INFIX TO POSTFIX
/*
1. Reverse Infix 
1.1 change opening bracket to closing bracket and closing to opening 
2. Infix 2 Postfix
2.1 pop only if priority is less
3. Reverse the ans
*/


string infix_to_prefix(string s){

string s=reverse(s.begin(),s.end());
 for( auoto it :s){
    if(s[it]=='('){
        s[it]=')'
    }
    else if (s[it]==')'){
        s[it]='('
    }
 }
string st;
string ans="";
int n=s.size();

 while(i<n){
   if((s[i]>='A' && s[i]<='z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0'&& s[i]>='9')){
        ans+=ans+s[i];
    }
    else if(s[i]==')'){
        st.push(s[i]);
    }
    else if(s[i]=='('){
        while(!st.empty() && st.top()!='('){
            ans+=st.top();
            st.pop();
        }
        st.pop();
    }

    else{
        if(s[i]=='^'){
        while(!st.empty() && priority[s[i]]<=priority[st.top()]){
            ans+=st.top();
            st.pop();
        }
    }
    else{  
        while(!st.empty() && priority[s[i]]<priority[st.top()]){
            ans+=st.top();
            st.pop();
        }

    }
    st.pop(s[i]);
 }
i++;

while(!st.empty()){
    ans+=st.top();
    st.pop();
}
ans=reverse(s.begin(),s.end());
return ans;

}


//========================================================
//postfix to infix

// 1) start from the first letter, 
// 2) if found a operand insert it into stack 
// 3) if found a operator ,add it between last 2 operand and wrap the operand
// 4) follow the 3 step until the end
string postfix_to_infix(string s){
    int n = s.size();
    int i = 0;
    string ans = "";
    stack<string> st;

    while(i < n){
        // operand check fixed (and simplified)
        if ( (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= '0' && s[i] <= '9') ) {

            // push char as string (since stack<string>)
            st.push(string(1, s[i]));
        }
        else {
            // stack holds string, not char
            string c1 = st.top(); 
            st.pop();
            string c2 = st.top(); 
            st.pop();

            // correct order: (c2 op c1), and fix string building
            string con = "(" + c2 + string(1, s[i]) + c1 + ")";
            st.push(con);
        }
        i++;
    }
    return st.top();
}


//=========================================================================
// prefix to infix

// 1) start from the last letter, 
// 2) if found a operand insert it into stack 
// 3) if found a operator ,add it between last 2 operand and wrap the operand
// 4) follow the 3 step until the end

string prefix_to_infix(string s){
    int n = s.size();
    int i = n-1;
    string ans = "";
    stack<string> st;

    while(i >= 0){
    
        if ( (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= '0' && s[i] <= '9') ) {

            st.push(string(1, s[i]));
        }
        else {
         
            string c1 = st.top(); 
            st.pop();
            string c2 = st.top(); 
            st.pop();

            // correct order: (c2 op c1), and fix string building
            string con = "(" + c1 + string(1, s[i]) + c2 + ")";
            st.push(con);
        }
        i--;
    }
    return st.top();
}


// =====================================================================
// postfix to prefix

// 1) start from the first letter, 
// 2) if found a operand insert it into stack 
// 3) if found a operator, pop upper 2 opeand ,inert operator and add back the operand
// 4) follow the 3 step until the end


string prefix_to_infix(string s){
    int n = s.size();
    int i = 0;
    string ans = "";
    stack<string> st;

    while(i<= n){
    
        if ( (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= '0' && s[i] <= '9') ) {

            st.push(string(1, s[i]));
        }
        else {
         
            string c1 = st.top(); 
            st.pop();
            string c2 = st.top(); 
            st.pop();

            // correct order: (c2 op c1), and fix string building
            string con = string(1, s[i]) + c1  + c2 + ;
            st.push(con);
        }
        i++;
    }
    return st.top();
}


// =====================================================================
// prefix to  postfix 

// 1) start from the last letter, 
// 2) if found a operand insert it into stack 
// 3) if found a operator, pop upper 2 opeand ,insert 1 operand, insert 2 operand , insert operator 
// 4) follow the 3 step until the end


string prefix_to_infix(string s){
    int n = s.size();
    int i = 0;
    string ans = "";
    stack<string> st;

    while(i>0){
    
        if ( (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= '0' && s[i] <= '9') ) {

            st.push(string(1, s[i]));
        }
        else {
         
            string c1 = st.top(); 
            st.pop();
            string c2 = st.top(); 
            st.pop();

            // correct order: (c2 op c1), and fix string building
            string con =  c1  + c2 + string(1, s[i])  ;
            st.push(con);
        }
        i++;
    }
    return st.top();
}
