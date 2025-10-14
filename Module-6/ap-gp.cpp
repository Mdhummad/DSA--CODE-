// diplay this A.P -(100,97,94.....) upto all terms which are positive

// #include<iostream>
// using namespace std;
// int main(){
// int a=100;
//     for(int i=1; i<=34 ;i++){ 
//     cout<<a<<endl;
//     a=a-3;
// }
// return 0;
//}


/*SECOND METHOD*/


/*   1. IT IS NOT NECESSARY TO USE  ALL THREE CONDITION OF LOOP 
SO WE CAN REMOVE ANYONE OF CONDITION WHENEVER WE WANT
*/

// #include<iostream>
// using namespace std;
// int main(){
// int a=100;
//     for(int i=1; a>0 ;i++){ 
//     cout<<a<<endl;
//     a=a-3;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){

    for(int  a=100; a>0 ; a=a-3){ 
    cout<<a<<endl;

}
return 0;
}
