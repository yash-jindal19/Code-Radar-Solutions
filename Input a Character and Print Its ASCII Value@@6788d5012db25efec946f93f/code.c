#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of '%c' is %d\n", ch, ch);
    
    return 0;
}
