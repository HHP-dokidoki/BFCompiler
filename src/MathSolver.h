#pragma once

#pragma once
#include <functional>

class MathSolver {
public:
    static long long gcd(long long a, long long b) {
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (b != 0) {
            long long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    static long long extGcd(long long a, long long b, long long& x, long long& y) {
        if (b == 0) {
            x = (a >= 0) ? 1 : -1;
            y = 0;
            return (a >= 0) ? a : -a;
        }
        long long x1 = 0, y1 = 0;
        long long g = extGcd(b, a % b, x1, y1);
        x = y1;
        y = x1 - (a / b) * y1;
        return g;
    }

    static bool solveLinearCongruence(long long a, long long b, long long m, long long& x0, long long& period) {
        if (m <= 0) return false;

        a %= m;
        b %= m;
        if (a < 0) a += m;
        if (b < 0) b += m;

        long long x = 0, y = 0;
        long long g = extGcd(a, m, x, y);
        if (b % g != 0) return false;

        long long m_div = m / g;
        long long mul = b / g;
        long long base = (x * mul) % m_div;
        if (base < 0) base += m_div;

        x0 = base;
        period = m_div;
        return true;
    }
};