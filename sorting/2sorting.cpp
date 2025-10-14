// STABLE AND UNSTABLE SORT 
// KNOW THE DIFFERENCE
// BUBBLE SORT IS A STABLE SORT


/*
QUES: HOW MUCH MAXIMUM SWAPS ARE NEEDED TO SORT ARRRAY OF LENGTH 6 ?
NO. OF SWAPS ==TOTAL NO. OF OPERATIONS

*/



/*
QUEES:SORT A STRING IN DECREASING ORDER OF VALUES ASSOCIATED AFTER REMOVAL OF VALUES SMALLER THAN X

*/


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

// string s="AAZYZXBDXJK";
// string str;
// for(int i=0;i<s.length();i++){
//     if(s[i]>='x'){
//         str.push_back(s[i]);
//     }
// }
// // sort(str.begin(),str.end());
// cout<<str;
// }


/*
QUES: PUSH ZEORES TO END WHILE MAINTAINING THE RELATIVE ORDER OF OTHER ELEMENTS
*/
#include<iostream>
using namespace std;
int main(){
int arr[9]={5,0,1,2,0,0,4,0,3};
int n=9;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
// BUBBLE SORT
for(int i=0;i<n-1;i++){

for(int j=0;j<n-1-i;j++){   //using -i make code efficient here 
    if(arr[j]==0){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 return 0;
}


// bubble is a swaping algorithm