 #include<iostream>
 using namespace std;
 int main(){
  int arr[5]; 

//   array me first bit out of 4  ka address uska array ke integer ka address kehlayega
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[3]<<endl;
  cout<<&arr[2]<<endl;
  cout<<&arr[4]<<endl;


  cout<<&arr<<endl;
   cout<<arr<<endl;
    // cout<<arr[]<<endl;   --->THIS WILL GIVE AN ERROR (UNCOMMENT IT AND SEE)
  cout<<arr[7];
//   array ka adress array ka first element ka hoga
return 0;
 }