// RECURSION AS FUNCTION CALLING ITSELF
// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return;
//     cout<<"hello world"<<endl;
//     fun(n-1);
// }

// int main(){
// fun(3);
//  return 0;
// }

// ============================================================================
// ====================================================================================
/*
MAKE A FUNCTION WHICH CALCULATES THE FACTORIAL OF N USING RECURSION*/


// ============================================================================
// ====================================================================================
// NORMAL METHOD

// #include<iostream>
// using namespace std;
// void fac(int n){
//     int f=1;
//     for(int i=2;i<=n;i++){
//         f*=i;
// }
// cout<<f;
// }
// int main(){
// fac(4);
//  return 0;
// }

// ============================================================================
// ====================================================================================
// BASE CASE
// RECURSIVE WAY OF FACTORIAL

// #include<iostream>
// using namespace std;
// int fac(int n){
//     if(n==1 || n==0)return 1;
//     int ans=n*fac(n-1);
//     return ans;
//     }
// int main(){

// cout<<fac(4);

//  return 0;
// }

// ============================================================================
// ====================================================================================
// PRINT N TO 1

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){return ;}  // base case
// cout<<n;           // kaam
//     print(n-1) ;      // call
//     }
// int main(){
// print(4);
//  return 0;
// }

// print 1 to n
// AFTER RECURSIVE CALL
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){return ;}// base case
//     print(n-1);      // call
//     cout<<n<<endl;        // kaam

//     }
// int main(){

// print(4);

//  return 0;
// }

// ============================================================================
// ====================================================================================
// PRINT I TO N

// #include<iostream>
// using namespace std;

// void print(int i,int n){
//  if(i>n) return  ;
// cout<<i;
// print(i+1,n);

// }
// int main(){

// print(1,4);

//  return 0;
// }

// ============================================================================
// print sum form 1 to n(parameterized)

#include <iostream>
using namespace std;




// int summation(int n){
// int sum=0;
// if(n==1)return 1;
// sum=n+summation(n-1);
// return sum;

// }

// int summ(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + summ(n - 1);
// }

// using void function
void summm(int sum, int n)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    summm(sum + n, n - 1);
}

int main()
{
    // cout << summ(4);
    return 0;
}

// ====================================================================================
// MAKE A FUNCTION WHICH CALCULATES 'a' RAISED TO POWER 'b' USING RECURSION

// USING LOOPS
// #include<iostream>
// using namespace std;
// int power(int a,int b){
// int p=1;
// for(int i=1;i<=b;i++){
//     p*=a;
//     }
// return p;
// }
// int main(){
// cout<<power(2,4);
//  return 0;
// }

// USING RECURSION
// #include<iostream>
// using namespace std;
// int power(int a,int b){
// // a^b=a^1 *a^b-1
// if (b==0)return 1;
// return a* power(a,b-1);

// }
// int main(){
// cout<<power(2,4);
//  return 0;
// }