/*
QUES:
INPUT A STRING OF EVEN LENGTH AND REVERSE THE FIRST HALF OF STRING*/


// #include<iostream>  
// #include<string>
// using namespace std;
// int main(){
// string str ;
// getline(cin,str);
// int n=str.length();
// // reverse(str.begin(),str.begin()+n/2);
// return 0;
// }


// ==============================================================================================
// ==============================================================================================
/* 
QUES==>
INPUT A STRING OF LENGTH GREATER THAN 5 AND REVERSE THE SUBSTRING FROM POSITIONS 2 TO 5 USING INBUILT FUNCTIONS  */

// #include<iostream>  
// #include<string>
// using namespace std;
// int main(){
// string str ;
// getline(cin,str);
// int n=str.length();
// // reverse(str.begin()+1,str.begin()+5);
// return 0;
// }


// ==============================================================================================
// ==============================================================================================
// SUBSTR() FUNCTIION

/* 
QUES==>
INPUT A STRING OF EVEN LENGTH AND RETURN THE SECOND HALF OF THAT STRING USING INBUILT SUBSTR FUNCTION  */

// #include<iostream>  
// #include<string>
// using namespace std;
// int main(){
// string str ;
// cout<<"enter a string";
// cin>>str;
// int n=str.length();
// cout<<str.substr(n/2);

// return 0;
// }



// ==============================================================================================
// ==============================================================================================
// TO_STRING()
/* 
QUES==>
RETURN THE TOTAL NUMBER OF DIGIT IN A NUMBER WITHOUT USING ANY LOOP  */

// #include<iostream>  
// #include<string>
// using namespace std;
// int main(){
// int x=123456;
// string str =to_string(x);
// cout<<str.length();
// return 0;
// }



// ==============================================================================================
// ==============================================================================================


/* 
QUES==>
INPUT A STRING AND RETURN THE NUMBER OF TIMES THE NEIGHBOURING CHARACTERS ARE DIFFERENT FROM EACH OTHERS.*/

// #include<iostream>  
// #include<string>
// using namespace std;
// int main(){
// string s;
// cin>>s;
// int count=0;
// int n=s.length();
// for(int i=0;i<n;i++){
//     if(n==1){
//         break;
//     }
//     if(n==2 && s[0]!=s[1]){
//         count=1;
//         break;
//     }
//     if(i==0){
//         if(s[i] != s[i+1])
// count++;
//         }
//     else if(i==n-1){
//         if(s[i] != s[i-1])  count++;
//         }    
//     else if(s[i] != s[i+1] && s[i] !=  s[i-1])
//     count++;
// }

// cout<<count;

// return 0;
// }





// ==============================================================================================
// ==============================================================================================
/* 
QUES==>
SORT A STRING USING INBUILT FUNCTION*/

// #include<iostream>  
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
// string s;
// getline(cin,s);
// sort(s.begin(),s.end()); // ASCII VALUE KE ORDER ME SORT KRKE DEGA
// cout<<s;
// return 0;
// }


// ==============================================================================================
// ==============================================================================================
/* 
QUES==>
GIVEN TWO STRINGS S AND T,RETURN TRUE IF IT IS AN ANGRAM OF S, AND FALSE OTHERWISE
ANAGRAM===>>>PERMUTATION OF ALPHABET
INPUT: S=PHYSICSWALLAH, T=WALLAHPHYSICS
OUTPUT: YES*/

// #include<iostream>  
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
// string s="physicswallah";
// string t="wallahphysics";
// sort(s.begin(),s.end());
// sort(t.begin(),t.end());
// cout<<s<<endl;
// cout<<t<<endl;
// if(s==t)cout<<true;
// else cout<<false;
// return 0;
// }





// ==============================================================================================
// ==============================================================================================
/* 
QUES==>
GIVEN A STRING CONSISTING OF LOWERCASE ENGLISH ALPHABETS.PRINT THE CHARACTER THST IS OCCURING MOST NUMBER OF TIMES.*/


// BRUTE WAY OF DOING IT
// #include<iostream>  
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
// string s="physicswallah";
// int max=0;
// int n=s.length();
// for(int i=0;i<n;i++){
//     char ch=s[i];
//     int count=1;
//     for(int j=i+1;j<n;j++){
//         if(s[j]==s[i])count++;
//     }
// if (max<count) max=count;
// }

// for(int i=0;i<n;i++){
//     char ch=s[i];
//     int count=1;
//     for(int j=i+1;j<n;j++){
//         if(s[j]==s[i])count++;
//     }
// if (count==max){
//     cout<<ch<<" "<<max<<endl;
// }
// }
// return 0;
// }


// ==============================================================================
// BETTER WAY 
//NOT UNDERSTAND ===>DO IT AGAIN

// #include<iostream>  
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){

// string s="leetcode";
// vector<int>arr(26,0);
// for(int i=0;i<s.length();i++){
//     char ch=s[i];
//     int ascii=(int)ch;
//     arr[ascii-97]++;
// }
// int mx=0;
// for(int i=0;i<26;i++){
//     if (arr[i]>mx) mx=arr[i];
// }

// for(int i=0;i<26;i++){
//     if(arr[i]==mx){
//         int ascii=i+97;
//         char ch=(char)ascii;
//         cout<<ch<<" "<<mx<<endl;
//     }
// }
// return 0;
// }




// ==============================================================================================
// ==============================================================================================
/* 
QUES==>
GIVEN N STRINGS CONSISITING OF DIGITS FROM 0 TO 9.RETURN THE INDEX OF STRING WHICH HAS MAXIMUM VALUE(TAKE 0 BASED INDEXING)
INPUT:0123,0023,456,00182,940,2901
OUTPUT:5
*/


// #include<iostream>  
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//  string arr[]={"0123","0023","00182","949","002901"};
//  int max=stoi(arr[0]);
// string maxs=arr[0];
//  for(int i=i;i<=5;i++){
//     int x=stoi(arr[i]);
//     if(x>max){
//         max=x;
//         maxs=arr[i];
//     }
//  }  


//  cout<<max;
// return 0;
// }




/* TWO QUES LEFT OF STRING &&&& ISOMORPHIC STRING
*/