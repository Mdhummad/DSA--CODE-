// PASSING VECTOR TO FUNCTION
/*
1==>VECTOR ARE PASSED BY VALUE
2==>EACH TIME VECTOR IS PASSED IN FUNCTION A NEW VECTOR IS CREATED
3==>& IS USED TO PASS BY REFERENCE
*/




#include<iostream>
#include<vector>
using namespace std;
int change(vector<int>a){
a[0]=199;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
// PASS BY REFERENCE
// int change(vector<int>& a){
// a[0]=199;
// for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
// }


}
int main(){ 
vector<int>v;
v.push_back(9);
v.push_back(86);
v.push_back(7);
v.push_back(6);
v.push_back(5);
v.push_back(3);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
change(v);
cout<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}





return 0;
}
