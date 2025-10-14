// LINEAR SEARCH

#include<iostream>
using namespace std;
int main(){   
int n;
int x;
cout<<"enter the size of array ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The element of array are ";
for(int i=0;i<n;i++){
     cout<<arr[i]<<" "<<endl;}

cout<<"Enter the element you want to search "<<endl;
cin>>x;
bool flag=false;
for(int i=0;i<n;i++){
    if(arr[i]==x){flag=true;}
}
if(flag=true){
    cout<<"element is found at index ";
}
else{
    cout<<"element not found ";
    }
return 0;
}

