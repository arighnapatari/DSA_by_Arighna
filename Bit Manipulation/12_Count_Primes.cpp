/*Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.*/

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for(int i=2; i<n; i++){
            if(isPrime[i]){
                for(long long j = 1LL * i*i; j<n; j+=i){
                    isPrime[j] = false;

                }
            }
        }
        int cnt = 0;
        for(int i = 2; i<n; i++){
            if(isPrime[i]) cnt++;

        }
        return cnt;
    }
};
