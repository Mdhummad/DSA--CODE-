#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;}
    return f;
    }


int combination(int n,int r){
int j=fact(n)/(fact(r)*fact(n-r));
return j;
}

int main(){
int n;
int r;
cout<<"enter the pascal triangle";
   cin>>n;
 
for(int i=0;i<=n;i++){
for(int j=0;j<=i;j++){
cout<<combination(i,j)<<" ";

}
cout<<endl;
}




     
}