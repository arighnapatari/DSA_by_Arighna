//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double solve(double x, long long n)
    {
        if(n == 0) return 1.0;
        double half = solve(x, n/2);

        if(n % 2 == 0)
        {
            return half * half;

        }
        else return half * half * x;
    }
    double myPow(double x, int n) {
        long long N = n;        // convert int into long long for edge cases

        if(N < 0)
        {
            x = 1 / x;
            N = -N;

        }
        return solve(x, N);
    }
};
