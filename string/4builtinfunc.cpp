// updation of a single char of string
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string s="raghav";
// s[1]='o';
// cout<<s<<endl;

// }
//IN C++ STRING ARE MUTABLE
//IN JAVA STRING ARE NOT MUTABLE



/*BUILT IN STRING FUNCTIONS*/


#include<iostream>
#include<string>
using namespace std;
int main(){
string str="my name is mohd hummad";


// [1.] str.length()===>for defining the size of string
cout<<str.length()<<endl;

// [2.] push_back()===>for adding element into string at last index
str.push_back('e');
str.push_back('r');
cout<<str<<endl;

// [3.] pop_back()===>for removing element from string at last index
str.pop_back();
cout<<str<<endl;


// [4.] '+' operator===> for adding 2 strings (appending a string at last of string)
string s="abc";
cout<<s<<endl;
s=s + "def";
cout<<s<<endl;


// [5.] reverse()===>for reversing a string

// reverse(str.begin(),s.end();)  NOT WORKING FOR SOME REASON ASK SOMEONE
cout<<str<<endl;


// [6.] substr()===>for printing a substring from a string
string st ="abcdef";
// s.substr(idx,length)
st.substr(1,3);
cout<<st.substr(1,3)<<endl;


// [7.] to_string()===>for converting integer to string
int x=12345;
string sg= to_string(x);
cout<<sg<<endl;


// [8.] stoi()===>for converting string to integer 
// [9.] stoll()==>for converting string to long-long
string kj="123456";
int p=stoi(kj);
cout<<p+1<<endl;




 return 0;
}