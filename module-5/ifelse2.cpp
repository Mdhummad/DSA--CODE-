
// /*take positive integer and tell if it is divisible by 5 or 3 */
//  #include<iostream>
// using namespace std;
// int main(){
// int x;
// cout<<"enter the integer ";
// cin >>x;
// if(x%5==0 || x%3==0)
// {cout<<"The number is divisible  by 5 or 3";}
// else 
// {cout<<"so, sorry it is not divisible by a5 or 3";}
//  return 0;
// }

/*=============================================================================================================================================================*/
/*take positive integer and print the greatest of them*/
 #include<iostream>
using namespace std;
int main(){
int x;
int z;
int y;
cout<<"enter first integer ";
cin>>x;
cout<<"enter second integer ";
cin>>y;
cout<<"enter third integer ";
cin>>z;
if(x>y && x>z)
{cout<<x <<" :is greatest";}
if(y>x && y>z)
{cout<<y <<" :is greatest";}
if(z>y && z>x)
{cout<<z <<" :is greatest";}
if(x==y)
{cout<<"x is egual to y";}
if(x==z)
{cout<<"x is equal to z";}
 return 0;
}