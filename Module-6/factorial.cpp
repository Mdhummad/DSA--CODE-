// WAP to find factorial of a number
// we can also do it using for loop
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int fact=1;
while(n>0){
fact*=n;
n--;

}


cout<<"the sum is : "<<fact;


 return 0;
}
