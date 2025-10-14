/*QUES:
INPUT A STRING OF LENGTH L AND COUNT VOWEL */

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;
//     cout << "Enter the string: ";
//     getline(cin, s); 
//     cout << s << endl;

//     int count = 0;
//     int i = 0;

//     while (i < s.length()) {
//         if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' ||
//             s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U') {
//             count = count + 1;
//         }
//         i++;
//     }

//     cout << "The number of vowels are " << count << endl;
 
//     return 0;
// }


// ==========================================================================================
// ================================================================================================

/*STRING ARE MUTABLE IN CPP BUT NOT IN JAVA*/

/* QUES:
UPDATION OF A SINGLR CHARACTER OF STRING
*/


// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string str="raghav";
//     cout<<str<<endl;
//     str[1]='o';
//     cout << "The string ater change is  " <<str << endl;
 
//     return 0;
// }



// ==========================================================================================
// ================================================================================================


/* QUES:
INPUT A STRING OF SIZE N AND UPDATE ALL THE EVEN POSITIONS IN THEE STRING TO CHARACTER
'a'. CONSIDER 0-BASED INDEXING.
*/


#include<iostream>
#include<string>
using namespace std;

int main() {
  string str="raghav";
  cout<<str<<endl;
  for(int i=0;str[i]!='\0';i++){
    if(i%2==0)  str[i]='a';
  }

  cout<<str<<endl;
    return 0;
}

