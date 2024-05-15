#include <stdio.h>

int main() {
    char str[100];
    int i, length, Palindrome = 1;
    printf("Enter any string: ");
    scanf("%s", str);


    for (length= 0; str[length] != '\0'; length++);

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }
    return 0;
}