#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scan("%lf",&a);
    printf("You entered: %lf", a);
    return 0;
}