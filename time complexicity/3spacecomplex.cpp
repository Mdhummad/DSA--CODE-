// study of all extra space used in term of given 'n'(variable)
// =============================================================================================
// =============================================================================================

/* 
CALCULATE THE SPACE COMPLEXITY FOR THE BELOW CODE SNIPPET.*/


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int a[n];
// for(int i=0;i<n;i++){
//     a[i]++;
// }
// // ARRAY OF N SIZE IS USED SO SPACE COMPLEXITY IS ALSO O(n)
//  return 0;
// }



// =============================================================================================
// =============================================================================================
// =============================================================================================

/*WHAT WILL BE THE SPACE COMPLEXITY IF WE JUST TRAVERSE WITHOUT CREATING ANY ARRAY?*/

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int c=0;
// for(int i=0;i<n;i++){
//     c++;
// }
// // as no extra space is created space complexity will be O(1)
//  return 0;
// }


// =============================================================================================
// =============================================================================================
// =============================================================================================

/*WHAT WILL BE THE SPACE COMPLEXITY FOR THE NESTED LOOP CODE SNIPPET ?*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int n;
// int m;
// vector<int>a;
// vector<int>b;
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         a.push_back(10);
//         b.push_back(5);
//     }
// }

// //  space complexity:==>O(n*m)
//  return 0;
// }



// =============================================================================================
// =============================================================================================
// =============================================================================================

/*WHAT WILL BE THE SPACE COMPLEXITY FOR THE NESTED LOOP CODE SNIPPET ?*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int n;
// int m;
// vector<int>a(n);
// vector<int>b(m);
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         a[i]=i;
//         b[j]=j;
//     }
// }

// //  space complexity:==>O(n+m)
//  return 0;
// }




// =============================================================================================
// =============================================================================================
// =============================================================================================

/*SPACE COMPLEXITY OF CREATING A 2D MATRIX */

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     int n;
// int arr[m][n];

// //  space complexity:==>O(n*m)
//  return 0;
// }


// =============================================================================================
// =============================================================================================
// =============================================================================================

/*WHAT WILL BE THE SPACE COMPLEXITY IF WE CREATE 3 ARRAY OF SAME SIZE ?*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int n;
// int a[n],b[n],c[n];

// for(int i=0;i<n;i++){
// c[i]++;
//     }


// //  space complexity:==> O(n+n+n) = O(3n) = O(n)
//  return 0;
// }



// =============================================================================================
// =============================================================================================
// =============================================================================================

/*WHAT WILL BE THE SPACE COMPLEXITY FOR THE NESTED LOOP CODE SNIPPET ?*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
int a[n][n/2];
for(int i=0;i<n;i*=2){
    for(int j=0;j<n/2;j++){
        a[i][j]++;
    }
}

//  space complexity:==>O(n^2)
// for time complexity when inner loop is not dependend on outer loop we simply multiply complexity of inner and outer loop
// inner loop =O(n),OUTER LOOP= o(logn) ,so total time complexity is o(nlogn) 
 return 0;
}