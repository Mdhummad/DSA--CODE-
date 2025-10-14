// basic math concept

// count of digit
/*
int count(int n){

int count;

while(n!=0){
int last_digit=n%10 ;
count ++;
n=n/10;

}
return count;
}


ANOTHER FUBNCTION TO COUNT THE DIGIT
int count(int n){
int cnt = (int)(log10(n)+1);
return cnt;
}

*/
//==============================================================================
// REVERSE THE NUMBER AND EXCLUDE ZERO

/*
int reverse_number(int n){

int count;
int rev_no=0;
while(n>0){
int last_digit=n%10 ;
rev_no=(rev_no *10)+last_digit;
n=n/10;

}
retUrn rev_no;
}


*/

// ===========================================================
// CHECK PALINDROME
// IF  AFTER REVERSE THE NUMBER IS SAME THEN IT IS SAID TO BE A PALINDROME

/*
#include <iostream>
using namespace std;

bool palindrome(int n) {
    int duplicate = n;
    int rev_no = 0;

    while (n > 0) {
        int last_digit = n % 10;
        rev_no = (rev_no * 10) + last_digit;
        n = n / 10;
    }

    if (duplicate == rev_no)
        return true;
    else
        return false;
}

int main() {
    int num = 121;
    if (palindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}

*/

//=====================================================================================================================
// ARMSTRONG NUMBER
// SUM OF CUBE OF THE INDIVIDUAL NUMBER IS EQUAL TO THAT NUMBER

/*
#include <iostream>
using namespace std;

bool armstrong(int n) {
    int duplicate = n;
    int sum=0;
    while (n > 0) {
        int last_digit = n % 10;
        int sum += (last_digit*last_digit*last_digit);
        n = n / 10;
    }

    if (sum == n)
        return true;
    else
        return false;
}

int main() {
    int num = 121;
    if (armstrong(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}
    */

//================================================================================
// MATHEMATICAL OBSERVATION

/*
void print_divisor(int n){
vector<int> ls;
for(int i=1;i<=sqrt(n);i++){
if(n%i==0){
ls.push_back(i);}

if((n/i)!=i){
ls.push_back(n/i);

}
}
}
sort(ls.begin(),ls.end());
for(auto it: ls)cout<< it<<" ";


}

*/

//============================================================================================

// PRIME NUMBER

// BRUTE FORCE SOLUTION
// time complexity here is O(n)
/*
bool primenumber(int n){
for(int i=0; i<n;i++){
if (n%i==0){count++;}
}
if(count==2)return true;
else return false;
}

*/

// optimized solution
/*

void print_prime_number(int n){
int count=0;
for(int i=1;i<=sqrt(n);i++){
if(n%i==0){
count++}

if((n/i)!=i){
count++;

}
}
}
if(count==2) cout<<"prime number"<<endl;
else cout<<"not a prime number"<<endl;

}


*/

// ============================================================================================
// GREATER COMMON DIVISOR(GCD) / HIGHEST COMMON FACTOR(HCF)

// EUCLADIAN ALGORITHM
// GCD(a,b)=GCD(a-b,b) if a>b
//      OR
// GCD(a,b)=GCD(a%b,b)if a>b

/*
void_gcd(int a , int b){
while(a>0 && b>0){
if(a>b) a=a%b;
else b=b%a;
}
if(a==0) return b;
else return a;


}

*/