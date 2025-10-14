/* write a program to check weather a character is alphabet or not*/
 #include<iostream>
using namespace std;
int main(){
char x;
cout<<"enter the character ";
cin >>x;
int a=int(x);
if(x>=97 && x<=122)
{cout<<"we have a lower alphabet";}
if(x>=65 && x<=90){
cout<<"we have upper case alphabet";}
else{cout<<"we dont have alphabet";}
 return 0;
}
