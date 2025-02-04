#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    char ch;

    printf("ASCII Value: ");
    scanf("%c", &ch);

    printf("%d", ch);
    
    return 0;
}
