/*======================================================BREAK============================*/
// WAP to check if a number is prime or not? 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"input the number you want to check ";
//    cin>>n;
// for(int i=2;i<n;i++){
// if(n%i==0){
//     cout<<"number is not prime";
//     break;
// }
// else{
//     cout<<"number is prime";
// }
// }
//  return 0;
// }



// sirs code


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"input the number you want to check ";
//    cin>>n;
//    bool flag=true;
// for(int i=2;i<n-1;i++){
// if(n%i==0){
//     flag=false;
//     break;
// }
// }
// if(n==1){cout<<"1 is neither prime nor composite";}
// else if (flag==true){cout<<n<<" is prime ";}
// else{cout<<"n is composite";}
// return 0;
// }



/*======================================================CONTINUE============================*/



// WAP to print odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++){
if(i%2==0){
    continue;
}
else{
    cout<<i<<endl;
}
}
 return 0;
}

