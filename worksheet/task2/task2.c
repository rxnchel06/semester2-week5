/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Rachel Sahay
 * ID: 201914077
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];

    printf("Enter a hexadecimal:");
    scanf("%8s", hex);

    int len = strlen(hex);

    for (int i = 0; i < len; i++) {
        char c = hex[i];
        int digit;

        // check if the character is a valid hex digit and convert it
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else {
            printf("Error: Invalid Hexadecimal\n");
            return 1;
        }

        // shift the accumulated value left by one hex digit and add the new digit
        decimal = decimal * 16 + digit;
    }

    printf("decimal:%ld\n", decimal);

    return 0;
}