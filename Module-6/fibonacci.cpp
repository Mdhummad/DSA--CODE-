// write a program to print nth fibonacci number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int a=1;
int b=1;
int sum=0;
for(int i=0;i<=n-2;i++){
    
sum=a+b;
a=b;
b=sum;




}
cout<<b;

 return 0;
}
