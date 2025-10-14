// #include<iostream>

// using namespace std;

// int combination(int n,int r){
// int nfact=1;
// for(int i=2;i<=n;i++){
//     nfact*=i;
// }

// int rfact=1;
// for(int i=2;i<=r;i++){
//     rfact*=i;
// }

// int nrfact=1;
// for(int i=2;i<=n-r;i++){
//     nrfact*=i;
// }

// int k=nfact/(rfact * nrfact);

// return k;

// }

// int main(){
//     cout<<combination(7,2);

//     return 0;
// }

/*=========================================================*/

// #include<iostream>
//  using namespace std;

// int fact(int x){
//     int f=1;
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
// return f;

// }

// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int r;
//     cout<<"enter r";
//     cin>>r;
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     int npr=nfact/nrfact;
//     cout<<ncr;

//     return 0;
// }
//==========================================================\


// MY VERSION FOR FACTORIAL FUNCTION
// int fact(int x) {
//     int f = 1;  // Start with 1 for factorial multiplication
//     for (int i = x; i >= 1; i--) {
//         f *= i;
//     }
//     return f;  // Return the factorial value
// }