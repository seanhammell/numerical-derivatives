#include <math.h>
#include <stdio.h>

#define KNRM "\x1b[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"

double f(double F(double), double x) {
    return 0.0;
}

void test_sin() {
    double sin_x_prime = 0.5;
    double slope = f(sin, M_PI/3);

    if (slope - 0.1 < sin_x_prime && sin_x_prime < slope + 0.1) {
        printf("%s[PASSED]%s test sin\n", KGRN, KNRM);
    } else {
        printf("%s[FAILED]%s test sin: %0.2f != %0.2f\n", KRED, KNRM, slope, sin_x_prime);
    }
}

void test_cos() {
    double cos_x_prime = -0.5;
    double slope = f(cos, M_PI/6);

    if (slope - 0.1 < cos_x_prime && cos_x_prime < slope + 0.1) {
        printf("%s[PASSED]%s test cos\n", KGRN, KNRM);
    } else {
        printf("%s[FAILED]%s test cos: %0.2f != %0.2f\n", KRED, KNRM, slope, cos_x_prime);
    }
}

void test_sqrt() {
    double sqrt_x_prime = 0.25;
    double slope = f(sqrt, 4);

    if (slope == sqrt_x_prime) {
        printf("%s[PASSED]%s test sqrt\n", KGRN, KNRM);
    } else {
        printf("%s[FAILED]%s test sqrt: %0.2f != %0.2f\n", KRED, KNRM, slope, sqrt_x_prime);
    }
}

int main() {
    test_sin();
    test_cos();
    test_sqrt();

    return 0;
}