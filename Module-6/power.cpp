// two number are entered through keyboard write a program 
// to find the value of one number raised to power of another


#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the base number";
cin>>n;
int m;
cout<<"enter the exponent number";
cin>>m;
bool flag=true;
if(m<0){
    flag=false;
    m=-m;
}


float power=1;
for(int i=1;i<=m;i++){
power*=n;
}
if (flag==true){
    power=1/power;
}



cout<<power;


 return 0;
}