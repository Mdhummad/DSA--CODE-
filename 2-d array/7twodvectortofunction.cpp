
#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector<vector <int> > &v){
    v[0][0]=100;
}


int main(){


vector<int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
vector<int> v2;
v2.push_back(4);
v2.push_back(5);
vector<int> v3;
v3.push_back(6);
v3.push_back(7);
v3.push_back(8);
v3.push_back(9);
v3.push_back(10);

cout<<endl;

//syntax
// IN TWO D VECTOR WE CAN PUSH BACK VECTOR INSIDE VECTOR
 vector<vector<int> >v;  // VECTOR V KUCH AISA BAN GYA HAI   ==>>   v={{1,2,3},{4,5},{6,7,8,9,10}};
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);


// PRINTING IN 2-D VECTORS
cout<<v[0][0]; 
cout<<endl;
change2dvector(v);
cout<<v[0][0]; 
    return 0;
}