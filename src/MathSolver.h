#pragma once

class MathSolver {
    public:
        MathSolver();

        static int gcd(int a, int b) {
            return b ? a : gcd(b, a % b);
        }

        static int modInverse(int a, int m) {
            a = (a + m) % m;
            for (int x = 1; x < m; x++) {
                if ((a * x) % m == 1) {
                    return x;
                }
            }
            return -1;
        }
};