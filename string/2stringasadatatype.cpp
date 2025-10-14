
#include<iostream>
#include<string>
using namespace std;
int main(){
// string str="mohd hummad";
// cout<<str[0];
// THERE ARE TOTAL OF 12 LETTER IN ABOVE STRING
 


// when we take input as a string  if we input a space the string will not take letter after space
string s;
cout<<"enter the string";
// cin>>s ;
// cin will work only if given string has no spaces
// So we will use getline

getline(cin,s);
cout<<s;
 return 0;
}