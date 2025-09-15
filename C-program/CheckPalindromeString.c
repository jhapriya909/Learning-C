#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is palindrome
bool isPalindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

int main() {
    char text[] = "radar";
    if(isPalindrome(text))
        printf("%s is a palindrome.\n", text);
    else
        printf("%s is not a palindrome.\n", text);
    return 0;
}
