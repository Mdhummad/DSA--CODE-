// Take input from user and print that much stars in particular rows and columns

#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"enter the number of rows";
cin>>rows;
int columns;
cout<<"enter the number of columns";
cin>>columns;
for(int i=1;i<=columns;i++){

for(int j=1;j<=rows;j++){
    // whenever we have loop inside a loop we use diffeerent identifier inside the loop

    cout<<"*";
}
cout<<endl;

}
return 0;
}