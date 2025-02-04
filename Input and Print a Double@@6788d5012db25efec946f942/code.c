#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scan("%f",&a);
    printf("You entered: %.4f", a);
    return 0;
}