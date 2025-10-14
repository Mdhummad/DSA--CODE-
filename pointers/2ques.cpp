// QUES: Write a program to calculate sum of two numbers using pointer
//   #include<iostream>
//   using namespace std;
//   int main(){
// int x;
// cout<<"enter x :";
// cin>>x;
// int y;
// cout<<"enter y :";
// cin>>y;
// int* p=&x;
// int* q=&y;
// cout<<*p + *q;

//   return 0;
//   }

// =============================================================================================

// Taking input using pointer
//  #include<iostream>
//   using namespace std;
//   int main(){
// int x;
// int* p=&x;
// cout<<"enter x :";
// cin>>*p;
// int y;
// int* q=&y;
// cout<<"enter y :";
// cin>>*q;
// cout<<x;
// cout<<y;
//   return 0;
//   }

// =============================================================================================
// write a function to swap number using pointer
// #include<iostream>
// using namespace std;
// void swap(int* x,int* y){
// int temp=*x;
// *x=*y;
// *y=temp;
// return;
// }

// int main(){
// int x;
// cout<<"enter x :";
// cin>>x;
// int y;
// cout<<"enter y :";
//  cin>>y;
// // int a=4,b=6;
// // int* x=&a;
// // int* y=&b;
// // swap(x,y);
// swap(&x,&y);
// cout<<x<<"  "<<y;
//   return 0;
//   }

// ===========================================================================
// PAss BY ALIAS===VERRY VERRY IMPORTANT
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
  return;
}

int main()
{
  int x;
  cout << "enter x :";
  cin >> x;
  int y;
  cout << "enter y :";
  cin >> y;
  swap(x, y);
  cout << x << "  " << y;
  return 0;
}
