#include<iostream>
using namespace std;
int main(){
int x=6;
int* p=&x;
int &y=x;
cout<<y<<endl;
cout<<&y<<endl;
cout<<x<<endl;
cout<<&x<<endl;
cout<<p<<endl;
cout<<*p<<endl;


    return 0;
}