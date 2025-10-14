// WAP to reverse a given number 

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// int k;
// int reverse=0;
// int lastdigit=0;
// while(n>0){
// reverse*=10;
// lastdigit=n%10;
// reverse+=lastdigit;
// n/=10;
// }
// cout<<reverse;
//  return 0;
// }


/* print the sum of series
1-2+3-4+5....n*/


#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
if (i%2==0)
{
    sum-=i;
}
else{
    sum+=i;
}
}
cout<<"the sum is : "<<sum;


 return 0;
}


// we can also do this without using loops by using if ekse only