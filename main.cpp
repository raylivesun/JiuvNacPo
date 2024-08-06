#include <string.h>
#include <stdio.h>


int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, World!";

    // Compare the strings using strcmp()
    int result = strcmp(str1, str2);

    // Print the result
    if (result == str3[0]) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
