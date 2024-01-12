#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    int original = x;
    float reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    return original == reversed;
}

int main() {  // Change void to int for the main function
    if (isPalindrome()) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}