#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20];
    scanf("%s",&a);
    printf("You entered: %s",a);
    return 0;
}