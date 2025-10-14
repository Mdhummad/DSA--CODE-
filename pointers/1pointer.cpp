// ADDRESS OF OPERATOR
//   #include<iostream>
//   using namespace std;
//   int main(){
// int x;
// cout<<x<<endl;
// cout<<&x;
//   return 0;
//   }


// POINTER
//   #include<iostream>
//   using namespace std;
//   int main(){
// int x;
// int* p=&x;

// // it will give an error
// // float y;
// // int* p=&y;

// float y;
// float* p=&y;

// char r;
// char* p=&r;


// cout<<x<<endl;
// cout<<&x<<endl;
// cout<<p;
//   return 0;
//   }


// ACCESING X VIA POINTER

  #include<iostream>
  using namespace std;
  int main(){
int x=90;
int* p=&x;
cout<<*p;
*p=7;
cout<<x;
  return 0;
  }