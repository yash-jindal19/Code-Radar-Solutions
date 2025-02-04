#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double as;
    scan("%lf",&as);
    printf("You entered: %lf", as);
    return 0;
}