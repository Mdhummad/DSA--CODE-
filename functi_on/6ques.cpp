// QUESTIONS

// write a program to find the greatest common divisor of 2 number using function

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int hcf=1;
// for(int i=1;i<=min(a,b);i++){
//     if(a%i==0 && b%i==0){
// hcf=i;

//     }

//     }
// cout<<hcf<<endl;
//  return hcf;
// }
// int main(){
// int a ;
// cout<<"eneter first number";
// cin>>a;
// int b;
// cout<<"enter second number";
// cin>>b;
// cout<<gcd(a,b);
//  return 0;
// }

// MORE OPTIMIZEED CODE
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int hcf=1;
// for(int i=min(a,b);i>=1;i--){
//     if(a%i==0 && b%i==0){
//    hcf=i;
//   break;
//     }

//     }
// cout<<hcf<<endl;
//  return hcf;
// }
// int main(){
// int a ;
// cout<<"eneter first number";
// cin>>a;
// int b;
// cout<<"enter second number";
// cin>>b;
// cout<<gcd(a,b);
//  return 0;
// }

// ========================================================================================================

// WRITE AA PROGRAM  TO SWAP TWO NUMBER USING TEMP VARIABLE AND WITHOUT USING TEMP VARIABLE
// SWAP USING TEMP VARIABLE

// #include <iostream>
// using namespace std;
// int main(){
// int a,b;
// int temp;
// cin>>a>>b;
// temp=a;
// a=b;
// b=temp;
// cout<<a<<b;
//    return 0;
// }

// SWAP WITHOUT USING TEMP

#include <iostream>
using namespace std;
int main()
{
   int a, b;
   int temp;
   cin >> a >> b;
   a = a + b;
   b = a - b;
   a = a - b;
   cout << a << "  " << b;

   return 0;
}
