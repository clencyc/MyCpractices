#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char first_char = tolower(str[start]);
        char last_char = tolower(str[end]);

        if (!isalnum(first_char)) {
            start++;
        } else if (!isalnum(last_char)) {
            end--;
        } else if (first_char != last_char) {
            return false;
        } else {
            start++;
            end--;
        }
    }

    return true;
}

int main() {
    // Test the function
    char str1[] = "A man, a plan, a canal, Panama!";
    if (isPalindrome(str1)) {
        printf("%s is a palindrome.\n", str1);
    } else {
        printf("%s is not a palindrome.\n", str1);
    }

    char str2[] = "race car";
    if (isPalindrome(str2)) {
        printf("%s is a palindrome.\n", str2);
    } else {
        printf("%s is not a palindrome.\n", str2);
    }

    char str3[] = "Hello, world!";
    if (isPalindrome(str3)) {
        printf("%s is a palindrome.\n", str3);
    } else {
        printf("%s is not a palindrome.\n", str3);
    }

    return 0;
}
