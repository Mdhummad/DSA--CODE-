#include <iostream>
using namespace std;
void address(int x,int y){//formal parameter
cout<<"address of x is :"<<&x<<endl;
cout<<"address of y is :"<<&y<<endl;

}


int main(){
int x=5;
int y=4;
cout<<"address of x is :"<<&x<<endl;
cout<<"address of y is :"<<&y<<endl;
cout<<endl<<endl;
address(x,y);//actual parameter

   return 0;
}