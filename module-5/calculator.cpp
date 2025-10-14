// write a program to create a calculator that  do basic arithmetic operations(add,subtract,multiply and devide) using switch case calculatorr should take two numbers and as input from user.

#include<iostream>
using namespace std;
int main(){ 
int x;
int z;
char op;
cout<<"enter your problem ";
cin>>x>>op>>z;
// if(op=='+')cout<<x+z;
// if(op=='-')cout<<x-z;
// if(op=='*')cout<<x*z;
// if(op=='/')cout<<x/z;

// USING SWITCH CASE
switch(op){
    case '+':
    cout<<x+z;
    break;

    case '-':
    cout<<x-z;
    break;

    case '*':
    cout<<x*z;
    break;

    case '/':
    cout<<x/z;
    break;

}


 return 0;
}