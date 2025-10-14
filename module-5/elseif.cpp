
/*See else if video good forn clearing concept*/


// take marks as input and print out percentage
// #include<iostream>
// using namespace std;
// int main(){
// int x;
// cout<<"enter your marks  ";
// cin>>x;
// if(x>100){
//     cout<<"marks are not valid";
// }
// else if(x>91 && x<=100){
//     cout<<"Excellent";
// }
// else if(x>81 ){
//     cout<<"Very good";
// }

// else if(x>71 ){
//     cout<<"good";
// }


// else if(x>61){
//     cout<<"average";
//     }

// else{
//     cout<<"you faill";
// }    
//     return 0;
// }




// Take 3 number as input  and tell if they can be side of triangle
#include<iostream>
using namespace std;
int main(){
int x;
int y;
int z;
cout<<"enter first side  ";
cin>>x;
cout<<"enter second side  ";
cin>>y;
cout<<"enter second side  ";
cin>>z;
if(x+y>=z){
    cout<<"Triangle is valid";
}
else if(x+z>=y){
    cout<<"triangle is valid";
}
else if(y+z>=x){
    cout<<"Triangle is valid";
}
else{
    cout<<"Triangle is not valid";
}    

// OR
// This particular can also be used that is given below
// if((x+y>=z)  &&  (x+z>=y) && (y+z>=x))



    return 0;
}