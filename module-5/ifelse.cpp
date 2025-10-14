// #include<iostream>
// using namespace std;
// int main(){
// int x;
// cout<<"enter number";
// cin >>x;
// cout<<(x%2==0)<<endl;//by doing this it print out boolean value euither 1 or 0
// if(x%2==0)// in if (condition boolean value is checked if  it is true  , if condition is executed or else condition is executed iuf it is false 
// {cout<<"the number is even";}
// else 
// {cout<<"number is odd";}
//     return 0;
// }

/*========================================================================================================================================*/
// /* Take a input from user and print absolute value of that integer*/
//  #include<iostream>
// using namespace std;
// int main(){
// int x;
// cout<<"enter the integer";
// cin >>x;
// if(x<=0)
// {cout<<"the number is even "<<-x;}
// else 
// {cout<<x;}
//  return 0;
// }

/*================================================================================================================================================*/

/* if cost price and selling price of an ite m is input through the keyboard,
write a program to  determine whether the seller has made profit or incurred 
loss. Also determine how much profit he made or loss he incurred*/
 #include<iostream>
using namespace std;
int main(){
int sp;
int cp;
cout<<"enter the selling price ";
cin >>sp;
cout<<"enter the cost price ";
cin >>cp;
int x=sp-cp;
int y=cp-sp;
if(sp>cp)
{cout<<"Cool !! We are making profit"<<endl;
cout<<"the profit we are making is"<<x;}
if(sp<cp) 
{cout<<"Ahh!! We are making loss";
cout<<"the loss is:"<<y;}
if(sp==cp){
    cout<<"No Profit no loss";
}
 return 0;
}


