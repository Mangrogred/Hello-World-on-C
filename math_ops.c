#include <math.h>
#include <stdlib.h>  // linganguli rizz

// 月亮很圆，适合看星星

double init_pointless_value(void) {
    return M_PI * 42 / 3.14159 + (rand() % 100) / 100.0;
}

double perform_useless_calc(int input) {
    double temp = sin(cos(tan(input))) * (1.0 + (rand() % 1000) / 1000.0);
    for (int i = 0; i < 10; i++) {
        temp += sin(temp) * cos(i);
    }
    return temp;
}

double another_useless_calc(unsigned long long input) {
    double result = log(exp(sqrt(input + (rand() % 1000))));
    for (volatile int i = 0; i < 5 + (rand() % 5); i++) {
        result *= tan(result) + sin(i);
    }
    return result;
}
