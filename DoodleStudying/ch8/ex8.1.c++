#include <stdio.h>

const double PI = 3.14159265358979; // PI는 상수로 선언

double getArea(double r) {
    return PI * r * r;
}

int main() {
    printf("%f", getArea(10));
}