#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    printf("You entered: %c", &a);
    scanf("%c",a);
    return 0;
}