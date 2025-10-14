//  BUBBLE SORT
 
// #include<iostream>
// using namespace std;
// int main(){
// int arr[6]={3,4,2,6,1,5};
// int n=6;

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// // BUBBLE SORT
// for(int i=0;i<n-1;i++){

// for(int j=0;j<n-1-i;j++){   //using -i make code efficient here 
//     if(arr[j]>arr[j+1]){
//         int temp=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=temp;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//  return 0;
// }


//  QUES:: GIVEN AN ARRAY, FIND IF IT IS SORTED OR NOT


// #include<iostream>
// using namespace std;
// int main(){
// int arr[6]={3,4,2,6,1,5};
// int n=6;
// bool flag = true;
// for(int i=0;i<n-1;i++){
//     if(arr[i]>arr[i+1]){
//         flag= false;
//         break;
//     }
// }
// if(flag==true){
//     cout<<"array is not sorted";
// }
// else cout<<"unsorted";

//  return 0;
// }



// BEST CODE FOR BUBBLE SORT WHERE TIME COMPLEXITY IS O(N)

#include<iostream>
using namespace std;
int main(){
int arr[6]={3,4,2,6,1,5};
int n=6;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
// BUBBLE SORT
for(int i=0;i<n-1;i++){
bool flag=true;
for(int j=0;j<n-1-i;j++){   //using -i make code efficient here 
    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=false;
        }
    }
    if(flag==true){//swap didn't happen
        break;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 return 0;
}

/*  

TIME COMPLEXITY
BEST CASE==O(N)
AVG CASE==O(N^2)
WORST CASE==O(N^2)



*/