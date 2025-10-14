/*print the given pattern 
*
**
***
****
*****
*/

// #include<iostream>
// using namespace std;
// int main(){
// int rows;
// cout<<"enter the number of rows";
// cin>>rows;
// for(int i=1;i<=rows;i++){
//     for (int j=1;j<=i;j++ ){
//         cout<<"*";
//     }                                                                                              
// cout<<endl;
// }
// return 0;
// }





/* START TRIANGLE REVERSE */
/*print the given pattern 

*****
****
***
**
*

*/


// #include<iostream>
// using namespace std;
// int main(){
// int rows;
// cout<<"enter the number of rows";
// cin>>rows;
// for(int i=1;i<=rows;i++){
//     for (int j=rows;j>=i;j-- ){
//         cout<<"*";
//     }                                                                                              
// cout<<endl;
// }
// return 0;
// }


/*SIR'S METHOD*/

// #include<iostream>
// using namespace std;
// int main(){
// int rows;
// cout<<"enter the number of rows";
// cin>>rows;
// for(int i=1;i<=rows;i++){
//     for (int j=1;j<=rows+1-i;j++ ){
//         cout<<"*";
//     }                                                                                              
// cout<<endl;
// }
// return 0;
// }

/*================================================================================*/


/*print the given pattern 
1
12
123
1234
*/

// #include<iostream>
// using namespace std;
// int main(){
// int rows;
// cout<<"enter the number of rows";
// cin>>rows;
// for(int i=1;i<=rows;i++){
//     for (int j=1;j<=i;j++ ){
//         cout<<j;
//     }                                                                                              
// cout<<endl;
// }
// return 0;
// }


/*================================================================================*/


/*print the given pattern 
1
13
135
1357
*/

#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"enter the number of rows";
cin>>rows;
for(int i=1;i<=rows;i++){
    for (int j=1;j<=2*i;j++ ){
        if(j%2!=0)
        {cout<<j;}
    }                                                                                              
cout<<endl;
}
return 0;
}