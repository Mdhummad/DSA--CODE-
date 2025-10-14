// FIND THE LAST OCCURENCE OF X IN THE ARRAY
#include<iostream>
#include<vector>
using namespace std;
int main(){   
vector<int>arr;  
arr.push_back(3);
arr.push_back(5);
arr.push_back(8);
arr.push_back(43);
arr.push_back(2);
arr.push_back(87);
arr.push_back(9);
arr.push_back(90);
arr.push_back(8);
int x=90;
int idx;
// for(int i=0;i<arr.size();i++){
// if(arr[i]==x)idx=i;
// }

// MORE BETTER CODE
for(int i=arr.size();i>0;i--){
if(arr[i]==x){idx=i;
break;}
}

cout<<idx;

return 0;
}
