#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long long a = dividend;
        long long b = divisor;

        bool negative = false;

        if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
            negative = true;
        }

        a = abs(a);
        b = abs(b);

        long long answer = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= temp + temp) {
                temp = temp + temp;
                multiple = multiple + multiple;
            }

            a = a - temp;
            answer = answer + multiple;
        }

        if (negative) {
            answer = answer;
        }

        return answer;
    }
};