#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[39], b[20];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}