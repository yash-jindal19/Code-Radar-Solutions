#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20];
    int b;
    char c[40];
    scanf("%s%d%s",&a,&b,&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}