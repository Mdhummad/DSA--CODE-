// BASIC OPERATORS ON VECTORS
#include<iostream>
#include<vector>
using namespace std;
int main(){   

vector<int>v; 


// ======================================================================================================================
// SIZE VS CAPACITY

v.push_back(3);
cout<<"this is size "<<v.size()<<endl;
cout<<"this is capacity "<<v.capacity()<<endl;
v.push_back(5);
cout<<"this is size "<<v.size()<<endl;
cout<<"this is capacity "<<v.capacity()<<endl;
v.push_back(8);
cout<<"this is size "<<v.size()<<endl;
cout<<"this is capacity "<<v.capacity()<<endl;
v.push_back(0);
cout<<"this is size "<<v.size()<<endl;
cout<<"this is capacity "<<v.capacity()<<endl;
// ======================================================================================================================

// pop_back()
// ==>parenthises ke andar kuch nhi dete



// v.push_back(3);
// v.push_back(5);
// v.push_back(4);
// v.push_back(55);
// v.push_back(32);
// v.push_back(7);
// v.push_back(8);
// v.push_back(78);
// v.push_back(32);
// v.push_back(98);
// v.push_back(37);
// v.push_back(15);



// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// cout<<endl;
// // v.pop_back elelment delete hota rehta hai
// // iske saath saath size bhi update hota rehta hai
// // but capacity is not affected it remain same
// v.pop_back();
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }


// cout<<"size is: "<<v.size()<<endl;
// cout<<"capacity is : "<<v.capacity()<<endl;
//  v.pop_back();
//   v.pop_back();
//    v.pop_back();
//     v.pop_back();

// cout<<"size is: "<<v.size()<<endl;
// cout<<"capacity is : "<<v.capacity()<<endl;
 
// ======================================================================================================================
// AT OPERATOR 



// v.push_back(55);
// v.push_back(32);
// v.push_back(7);
// v.push_back(8);
// v.push_back(78);
// v.push_back(32);
// v.push_back(98);
// v.push_back(37);
// v.push_back(15);

// v.at(2)=90;
// cout<<v.at(2);

// ======================================================================================================================
// SORT OPERATOR 



// v.push_back(55);
// v.push_back(32);
// v.push_back(7);
// v.push_back(8);
// v.push_back(78);
// v.push_back(32);
// v.push_back(98);
// v.push_back(37);
// v.push_back(15);
//  for(int i=0;i<v.size();i++){
//      cout<<v[i]<<" ";
//  }
// cout<<endl;

// // sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//      cout<<v[i]<<" ";
//  }

// //  error is coming  while  using sort function







return 0;
}