// print hello world n number of times and take input from user

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
// for(int i=1; i<=n ;i++){
//     cout<<"hello"<<endl;
// }
// return 0;
// }


// ==================================================================================================================================================
// print all the even number between 1-100

// #include<iostream>
// using namespace std;
// int main(){
    
// for(int i=0; i<=100 ;i++){
//     if(i%2==0 )
//     cout<<i<<endl;
// }
// return 0;
// }

// ==================================================================================================================================================

// print the table of 19

// #include<iostream>
// using namespace std;
// int main(){
// // for(int i=19; i<=190 ;i++){
// //     if(i%19==0 )
// //     cout<<i<<endl;
// // }
// // above method can also be used but here loop will work for 190-19=179 times which will only increase the time complexity

// // for(int i=1; i<=10 ;i+19)     loop is only workinh for 10 times
//     int i;
// for( i=1; i<=10 ;i++){  // loop will only work for 10 times
//      cout<<19*i<<endl;
// }
// cout<<i;
// return 0;
// }
// // here we have printed i outside the loop
// // please see it is important


// ==================================================================================================================================================


// display a A.P. n number of times
// take input from user and print that number of terms

/*  FIRST METHOD    */
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number of terms you want to print"<<endl;
// cin>>n;
// for(int i=1; i<=(2*n-1) ;i+=2){
//   cout<<i<<endl;
// }
// return 0;
// }

/* SECOND METHOD */
/* BETTER AND EASY METHOD */

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number of terms you want to print"<<endl;
// cin>>n;
// int a=1;
// for(int i=1;i<=n;i++){
//    cout<<a<<endl;
//   a+=2;
 
// }
// return 0;
// }


// ==================================================================================================================================================


// Display this G.P-1,2,4,8,16,... upto n terms

#include<iostream>
using namespace std;
int main(){
 int n;
cout<<"enter the number of terms you want to print"<<endl;
cin>>n;
int a=1;

    for(int i=0; i<=n ;i++){
   a=a*2; 
    cout<<a<<endl;
}
return 0;
}
