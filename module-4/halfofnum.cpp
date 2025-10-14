// /* write a code  where you take integer as input and print half of it*/
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cin >>x;
//     float y=(float)x;
//     float c=(y/2);
//     cout<<c;
// return 0;
// }


/* take float input and print the fractional part of real number*/
#include <iostream>
using namespace std;
int main(){
   float x;
   cout<<"enter your real number";
   cin>>x;
   int z=(int)x;
   if (z<0) z=z-1;
   float y=x-z;
   cout<<y;


return 0;
}