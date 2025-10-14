
//STRINGSTREAM 


// =================================================================
// ======================================================================
/*
QUES===>>
GIVEN A SENTENCE, SPLIT EVERY SINGLE WORD OF THE SENTENCE AND PRINT A NEW LINE.*/

// #include<iostream>
// #include<string>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main(){
// string str="Raghav is a mathss teacher";
// stringstream ss(str);
// string temp;

// while(ss>>temp){  //TAKING INPUT FROM SS INTO TEMP
//     cout<<temp<<endl;
// }
//  return 0;
// }




// =================================================================
// ======================================================================
/*
QUES===>>
GIVEN A SENTENCE'STR',RETURN THE WORD THAT IS OCCURING MOST NUMBER OF TIMES IN THAT SENTENCE */
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
string str="Raghav is a mathss teacher. He is DSA mentor also";
stringstream ss(str);
string temp;
vector<string> v;

while(ss>>temp){
v.push_back(temp);
}

// VECTOR PRINT
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
cout<<endl;
sort(v.begin(),v.end());

// VECTOR PRINT AFTER SORTING
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
 return 0;
}