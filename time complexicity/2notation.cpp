/*BIG O NOTATION
EXAMPLE:== O(n), O(n^2) , O(logn) , O(n^3) , O(2^n) , O(1)
WHERE N IS USUALLY SIZE OF ARRAY/DATA STRUCTURE*/

// CALCULATING TIME COMPLEXITY


// =========================================================================================================
// =========================================================================================================

/*QUES: calaculate the time complexity for iterating in a loop*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
// for(int i=0;i<n;i++){
//     cout<<"physics wallah ";
// }
// // ye loop n times chalegaso time complexity will be O(n)
//     return 0;
// }



// =========================================================================================================
// =========================================================================================================

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
// for(int i=0;i<n;i+=2){
//     cout<<"physics wallah ";
// }
// // ye loop n/2 times chalega so time complexity will be O(n/2) which is equal to o(n)
//     return 0;
// }




// =========================================================================================================
// =========================================================================================================


// FIRST FORMULA
// -----------------------------------
// |    O(kn) = O(n)                 |                
// -----------------------------------

// SECOND FORMULA
// -----------------------------------
// |    O(n +OR- k ) = O(n)            |                
// -----------------------------------


// THIRD FORMULA
// ----------------------------------------------------------
// |    O(k1n^m +OR- k2n^m-1 +OR- k3n^m-2 =O(n^m)  ) = O(n) |           |                
// ----------------------------------------------------------
/*EXAMPLE===>
1) O(5n^3 +3) = O(n^3)
2) O(6n^2-8)=O(n^2)
3) O(n^2 +n)=O(n^2)
4) O(11n^15/2 + 2n^3 - 7n^4 + 6n)=O(n^15/2)
*/


// =========================================================================================================
// =========================================================================================================


// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
// for(int i=0;i<n-7;i+=2){
//     cout<<"physics wallah ";
// }
// // ye loop n-7 times chalega so time complexity will be O(n-7) which is equal to o(n)
//     return 0;
// }


// =========================================================================================================
// =========================================================================================================



// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int m=20;
// int a[n],b[m];
// for(int i=0;i<n;i+=2){
//     a[i]++;
// }


// for(int i=0;i<m;i+=2){
//     b[i]++;
// }
// // upar wala loop ki O(n),niche wala loop ki O(m) so mila ke it will be O(m+n)
//     return 0;
// }




// =========================================================================================================
// =========================================================================================================


// LOOP KE ANDAR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
    
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;i++){
// cout<<"PW"<<endl;
// }
// }

// // andar wale loop ki O(n),bahar wale loop ki O(n) so mila ke it will be O(n^2)
//  it would have been O(n*m) if andar wale loop m time iterate hota to
//     return 0;
// }




// =========================================================================================================
// =========================================================================================================


// LOOP KE ANDAR LOOP==2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
    
// for(int i=1;i<=n;i++){
//     for(int j=1;j<i;i++){
// cout<<"PW"<<endl;
// }
// }

// // no. of iterations will be 1+2+3+4..+n= (n^2+n)/2 = O(n^2/2 +n/2) = O(n^2/2) =O(n^2)
//     return 0;
// }



// =========================================================================================================
// =========================================================================================================


// LOOP KE ANDAR LOOP==2
#include<iostream>
using namespace std;
int main(){
 int c=0;
 int k=2;
 int n; 
 for(int i=1;i<=n;i*=k){
    c++;
 }

// see video last part very important time complexity is O(logn)
 return 0;
}

// =================================================
//  O(logn)<<< O(n) <<< O(n^2) <<< O(n^3)
// =================================================



// =========================================================================================================
// =========================================================================================================


// LOOP KE ANDAR LOOP==2
#include<iostream>
using namespace std;
int main(){
 int c=0;
 int n; 
 int m;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<m;j++)
    c++;
 }

/*
O(m*n)
*/ 
 return 0;
}