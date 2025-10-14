/* PRINT FIBBONACI SERIES*/

// int fibo(int n){
// if(n==1 || n==2) return 1;
// return fibo(n-1)+fibo(n-2);
// }
// #include<iostream>
// using namespace std;
// int main(){
// cout<<fibo(4);
//   return 0;
// }

//==========================================================================
// power function log method

// #include<iostream>
// using namespace std;
// int power(int a,int n){
// // a^b=a^1 *a^b-1
// if (n==0)return 1;
// if (n==1)return a;
// int ans=power(a,n/2);
// if(n%2==0) return ans*ans;
// if(n%2!=0) return ans*ans*a;

// }
// int main(){
// cout<<power(2,4);
//  return 0;
// }

// =============================================================================
// =============================================================================
// STAIR PATH PROBLEM
// EITHER ONE STEP OR TWO STEPS AND THIER COMBINATION
// #include<iostream>
// using namespace std;
// int stair(int n){
// if(n==2)return 2;
// if(n==1) return 1;
// return stair(n-1)+stair(n-2);
// }
// int main(){
// cout<<stair(5);
//  return 0;
// }

// =============================================================================
// =============================================================================
// MAZE PATH PROBLEM

// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er, int ec){
// if(sr>er || sc>ec) return 0;
// if(sr==er && sc==ec) return 1;
// int rightways =maze(sr,sc+1,er,ec);
// int downways =maze(sr+1,sc,er,ec);
// int totalways=downways +rightways;
// return totalways;
// }

// void printpath(int sr,int sc,int er, int ec,string s){
//     if(sr>er || sc>ec) return ;
// if(sr==er && sc==ec){
//     cout<<s<<endl;
//     return;
// }
// printpath(sr,sc+1,er,ec,s+'r');//right
// printpath(sr+1,sc,er,ec,s+'d');//down

// }

// int main(){
// cout<<maze(0,0,2,2);
// printpath(1,1,3,3,"");
//  return 0;
// }

// we can do it using 2 parameter also see how,.......................................................

// ======================================================
// ======================================================
// pre in post

// #include<iostream>
// using namespace std;
// void pip(int n){
// if(n==0) return;
// cout<<"pre "<<n<<endl;
// pip(n-1);
// cout<<"in "<<n<<endl;
// pip(n-1);
// cout<<"post "<<n<<endl;
// }
// int main(){
// cout<<endl;
// pip(2  );
// cout<<endl;
// }

// ======================================================
// ======================================================
// zig zag
#include <iostream>
using namespace std;
void zigzag(int n)
{
    if (n == 0)
        return;
    cout << n;
    zigzag(n - 1);
    cout << n;
    zigzag(n - 1);
    cout << n;
}
int main()
{
    cout << endl;
    zigzag(2);
    cout << endl;
}