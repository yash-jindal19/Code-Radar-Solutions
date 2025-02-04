#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("You entered: %c", &a);
    printf("%c",a);
    return 0;
}