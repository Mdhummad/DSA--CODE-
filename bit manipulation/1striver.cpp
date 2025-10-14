#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convert_string_to_binary(int n){
    string res;
    while(n>0){          // keep your original condition
        int ans = n % 2;
        res += to_string(ans);       // fix conversion and append
        n = n / 2;
    }
    reverse(res.begin(), res.end());  // add missing semicolon
    return res;                       // return the string
}

int main() {
    int num = 13;
    cout << convert_string_to_binary(num) << endl; // Output: 1101
    return 0;
}
// ============================================================

int convert_to_binary(int n){
int ans=0;
int i=0;
    while(n!=0){
int bit=n%2;
ans=(bit * pow(10,i)+ans);
n=n/2;
i++;
}

}



// ===================================================================================
int convert_binary_to_decimal(string x){
int len=x.length();
int power_of_2=1;
int num=0;
for(int i=len-1;i>0;i++){
    if(x[i]==1){
        num=num+power_of_2;
    }
    power_of_2=power_of_2*2;
}
retun num;
}


// ==============================================================================================
//SWAP NUMBER USING XOR VARIABLE
//use the concept if we do XOR of two same variable ans would be zero

void swap(int &a, int &b){
a=a^b;
b=a^b;
a=a^b;

cout<<a;
cout<<b;

return ;
}

// =======================================================================================================
//  shifting code


// RIGHT SHIFT
int right_shift(int n,int places){
    
    // BELOW CODE FIND X^PLACES
    int deno=1;
    for(int i=0;i<places;i++){
        deno=deno*2;
    }

    int righ_ele=n/deno;

    return righ_ele;
}

// LEFT SHIFT
int left_shift(int n, int places) {
    int deno = 1;
    for (int i = 0; i < places; i++) {
        deno = deno * 2;
    }

    int left_ele = n * deno; 
    return left_ele;

}

// LEFT SHIFT IN BINARY
string left_shift(string binary, int places) {
    return binary + string(places, '0');
}



// RIGHT SHIFT IN BINARY

string right_shift(string binary, int places) {
    int n = binary.size();

    if (places >= n) {
        return string(n, '0');
    }

    // add leading zeros
    string result = string(places, '0') + binary.substr(0, n - places);
    return result;
}

// =============================================================================================================================
// AND ,OR ,NOT AND BITWIZE AND ,OR AND NOT

#include <bits/stdc++.h>
using namespace std;

// AND operation between two binary strings
string binaryAND(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1' && b[i] == '1')
            result += '1';
        else
            result += '0';
    }
    return result;
}

// OR operation between two binary strings
string binaryOR(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1' || b[i] == '1')
            result += '1';
        else
            result += '0';
    }
    return result;
}

// NOT operation (on a single string)
string binaryNOT(string a) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1')
            result += '0';
        else
            result += '1';
    }
    return result;
}

#include <iostream>
using namespace std;

int main() {
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    int result = a & b; // binary: 0001 -> 1

    cout << "a & b = " << result << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    int result = a | b; // binary: 0111 -> 7

    cout << "a | b = " << result << endl;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a = 5;  // binary: 0000 0101
    int result = ~a;

    cout << "a = " << a << endl;
    cout << "~a = " << result << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    int result = a ^ b; // binary: 0110 -> 6

    cout << "a ^ b = " << result << endl;
    return 0;
}



// ========================================================================================================
// LEFT SHIFT  AND RIGHT SHIFT

#include <iostream>
using namespace std;

int main() {
    int num = 20; // binary: 0001 0100
    int rightShift = num >> 2; // shift right by 2 bits

    cout << "Original: " << num << endl;
    cout << "After right shift by 2: " << rightShift << endl; // 20 / 4 = 5
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num = 5; // binary: 0000 0101
    int leftShift = num << 2; // shift left by 2 bits

    cout << "Original: " << num << endl;
    cout << "After left shift by 2: " << leftShift << endl; // 5 * 4 = 20
    return 0;
}


// =======================================================================================================================

// CHECK IF KTH BIT IS 0 OR NOT

   #include <iostream>
using namespace std;

int main() {
    int num = 37; // Example number: binary 0010 0101
    int k = 3;    // Check the 3rd bit (0-indexed from right)

    if (num & (1 << k)) {
        cout << "The " << k << "th bit is SET." << endl;
    } else {
        cout << "The " << k << "th bit is NOT set." << endl;
    }

    return 0;
}
// =========================================================================================
// SET ITH BIT TO  1
#include <iostream>
using namespace std;

int main() {
    int num = 37; // binary: 0010 0101
    int i = 2;    // We want to set the 2nd bit (0-indexed from right)

    num = num | (1 << i); // Set ith bit to 1

    cout << "Number after setting " << i << "th bit: " << num << endl;

    return 0;
}


// ====================================================================================================
// CLEAR ITH BIT TO 0

#include <iostream>
using namespace std;

int main() {
    int num = 37; // binary: 0010 0101
    int i = 2;    // We want to clear the 2nd bit (0-indexed from right)

    num = num & (~(1 << i)); // Clear ith bit

    cout << "Number after clearing " << i << "th bit: " << num << endl;

    return 0;
}
// ============================================================================================================
// REMOVE LAST SET BIT
#include <iostream>
using namespace std;

int main() {
    int num = 38; // binary: 0010 0110

    num = num & (num - 1); // Remove last set bit

    cout << "Number after removing last set bit: " << num << endl;

    return 0;
}
// =============================================================================================
// CHECK IF NUMBER IS POWER OF 2
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num = 16;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }

    return 0;
}4
// =====================================================================================================

// CHECK IF A NUMBER IS ODD OR NOT

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n & 1)
        cout << n << " is odd.";
    else
        cout << n << " is even.";

    return 0;
}
// ===============================================================================================================
//MINIMUM BIT FLIP TO CONVERT A NUMBER
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;

        int cnt=0;
        while(ans!=0){
            ans=ans&(ans-1);
            cnt++;
        }
        return cnt;
        
    }
};
// ===============================================================================================
// FIND NUMBER THAT APPEAR  ONLLY ONCE
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique=0;
        for(int i=0;i<nums.size();i++){
            unique^=nums[i];
        }
        return unique;
        
    }
};
// ==========================================================================================================
// PRINT ALL SUBSET

// SEE RECURSION METHOD
// ============================================================================================================-
// FIND XOR FROM 1 TO N

int xor1ToN(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}
// ========================================================================================
//SINGLE NUMBER 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int n=nums.size();   

    sort(nums.begin(),nums.end());  

     for(int i=1;i<nums.size();i=i+3){
        if(nums[i]!=nums[i-1]){
            return nums[i-1];
        }
     }   
     return nums[n-1] ;

    }
};

// =================================================================================================================

// SINGLE NUMBER 3\


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     vector<int>ans;
      int n=nums.size();
      int xorr =0;
      for(int i = 0;i<n;i++){
        xorr=xorr^nums[i];
      }  
// setting up rightmost bit

int num=xorr&(xorr-1);
 num=num^xorr;

 int a=0;
 int b=0;


 for(int i=0;i<n;i++){

    if(nums[i] & num){
        a=a^nums[i];
    }
    else{
        b=b^nums[i];
    }
 }
 ans.push_back(a);
 ans.push_back(b);



return ans;
        
    }
};

// ======================================================================================================
// SEE EASIER SOL TOO

// dDEVIDING A NUMBER WITHOUR USING * AND DIVIDEND OPERATOR
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;

        int sign = 1;
        if((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor >= 0)) 
            sign = -1;

        long long n = abs((long long)dividend);
        long long m = abs((long long)divisor);
        int ans = 0;

        while(n >= m){
            int cnt = 0;
            while(n >= (m << (cnt + 1))){
                cnt++;
            }
            ans += (1 << cnt);
            n -= (m << cnt);
        }

        return sign * ans;
    }
};
