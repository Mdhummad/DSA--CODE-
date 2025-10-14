// WAP to count digits of a given number.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// int count=0;
// int a=n;
// while(n>0){
//     n/=10;
//     count++;
// }
// if (a==0)
// {
// cout<<1;
// }
// else cout<<count;
//     return 0;
// }





/*DO THE QUESTION USING FOR LOOP*/

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// int count=0;
// if(n==0{
//     cout<<1
// })
// for(int i=10;n!=0;){
// n/=i;
// count++;
// }
// cout<<count;
//     return 0;
// }




/* CHAT GPT CODE*/
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Handle the case where the number is 0
//     if (n == 0) {
//         cout << 1 << endl;
//         return 0;
//     }

//     int count = 0;
    
//     // Using a for loop to count the digits
//     for (; n != 0; n /= 10) {
//         count++;
//     }

//     cout << count << endl;
//     return 0;
// }


/*=============================================================================*/
// WAP to Print sum of  digits of a given number.

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int lastdigit=0;
int sum=0;
while(n>0){
 lastdigit=n%10;
sum += lastdigit;
n/=10; 
}
cout<<sum;
 return 0;
}