#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20];
    scanf("%c",&a);
    printf("You entered: %c",a);
    return 0;
}