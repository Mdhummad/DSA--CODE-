// ways to initialize an arrray
#include<iostream>
using namespace std;
int main(){   
int arr[7];
arr[0]=3;
arr[1]=3;
arr[2]=3;
arr[3]=3;
arr[4]=3;
// int arr[7]={1,2,3,4,5,7,6};
cout<<arr[5]<<endl;
cout<<arr[1]<<endl;
// using for loops in array
for(int i=0;i<=6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}




// QUES:given an array of marks of students,if the mark of any student is less than 35 print its rollno.
// [roll number here refers to the index of array]
// #include<iostream>
// using namespace std;

// int main() {   
//     int n;
//     cout << "Enter the number of students: ";  
//     cin >> n; 

//     int arr[n];
//     cout << "Enter the marks: ";
//     for(int i = 0; i <= n-1; i++) {
//         cin >> arr[i];
//     }

//     cout << "Students with marks less than 35 are at indices: ";
//     for(int i = 0; i <= n-1; i++) {
//         if(arr[i] < 35) {
//             cout << i << "  ";
//         }
//     }
//     cout << endl;

//     return 0;
// }



