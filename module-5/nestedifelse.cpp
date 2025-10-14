#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter your number";
cin>>x;
// we can also use 
// if(   (x%3==0 || x%5==0)  &&  (x%15 !=0) )
if(x%3==0 || x%5==0){
cout<<"The number is  divisible by 5 or 3"<<endl;

if(x%15 !=0){
    cout<<"The number is not divisible by 15"<<endl;
};}
else{
    cout<<"the number is not divisible by 5,3 and 15 ";
}



    return 0;
}