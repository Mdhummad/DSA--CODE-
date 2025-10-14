 /*SIZE OF A ARRAY AND NUMBER OF ELEMENTS*/
//  #include<iostream>
//  using namespace std;
//  int main(){
//   int arr[]={2,3,4,1,4,554,23,1,1,3,43,2,2,2,1,23,};
// int k=sizeof(arr);
// int l=sizeof(arr[0]);
// cout<<k<<endl;
// cout<<l<<endl;
// int noofelement=k/l;
// cout<<noofelement<<endl;
// return 0;
//  }


// /* CALCULATE THE SUM OF ALL ELEMENT IN A GIVEN ARRAY*/

 #include<iostream>
 using namespace std;
 int main(){
int n;
int arr[n];
int i;
cout<<"enter the size of array"<<endl;
cin>>n;
for( i=0;i<n;i++){
cout<<"enter elements of array",i;
cin>>arr[i];
}
int sum=0;
for(int j=0;j<n;j++){
sum+=arr[j];
}
cout<<"sum of array "<<sum;
return 0;
 }








