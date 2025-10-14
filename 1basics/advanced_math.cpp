//PRINT PRIME FACTOR OF A NUMBER

bool prime(int n) {
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if ((n / i) != i)  // avoid counting same divisor twice
                count++;
        }
    }

    if (count == 2) return true;
    else return false;
}

vector<int> print_all_prime(int n) {
    vector<int> ans;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (prime(i)) ans.push_back(i);
            if ((n / i) != i && prime(n / i))
                ans.push_back(n / i);
        }
    }

    return ans;
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

         for(int i=2;i<=n;i++){
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


vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}