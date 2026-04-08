//PRINT PRIME FACTOR OF A NUMBER
#include <iostream>
using namespace std;

void printPrimeFactors(int N) {
    for (int i = 2; i <=sqrt(N); i++) {
        while (N % i == 0) {
            cout << i << " ";
            N = N / i;
        }
    }

    // If N is still greater than 1
    if (N > 1) {
        cout << N;
    }
}

int main() {
    int N;
    cin >> N;
    printPrimeFactors(N);
    return 0;
}


// =================================================================
// PRINT DIVISOR OF THE NUMBER
 

// EASY WAY WOULD BE TO GO FOR A for LOOP BUT IT WILL TAKE A TIME COMPLEXITY OF O(N) WE CAN STILL DO IT IN O(UNDERROOT N )BY USING  ABOVE (N/I!=I) METHHOD.

vector<int>all_divisor(int n){
vector<int>ans;
for(int i=0;i<sqrt(n);i++){
if(n%i==0)ans.push_back(i);
if(n/i!=i)ans.push_back(n/i);
}
}


// ===========================================================================================
//SIEVE OF ERATOSTHONESES


class Solution {
public:
    int countPrimes(int n) {
         int count=0;
         
         vector<bool>sieve(n+1,1);
         sieve[0]=sieve[1]=false;

         for(int i=2;i* i<=n;i++){
            if(sieve[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    sieve[j]=false;
                }
            }
         }
         
         
         
         for(int i=2;i<n;i++){
            if(sieve[i]==1)count++;
         }
         return count;
    }
};

// ==============================================================================================================
// PRIME FACTORIZATION OF A NUMBER


#include <iostream>
using namespace std;

void printPrimeFactors(int N) {
    for (int i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            cout << i << " ";
            N = N / i;
        }
    }

    // If N is still greater than 1
    if (N > 1) {
        cout << N;
    }
}

int main() {
    int N;
    cin >> N;
    printPrimeFactors(N);
    return 0;
}

//==================================================================================================
//brute force
int power(int x,int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*x;
    }
return ans;
}

// 
// optimal
int power(int x, int n) {
    int ans = 1;

    while (n > 0) {
        if (n % 2 != 0) {     
            ans = ans * x;
            n = n - 1;
        } else {              
            x = x * x;
            n = n / 2;
        }
    }

    return ans;
}


// if the power is negative simply devide ans by 1