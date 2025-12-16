#include <stdio.h>
int main() 
{
    unsigned int value = 5; 
    unsigned int leftShiftResult = value << 2;
    unsigned int rightShiftResult = value >> 1; 
    printf("Original value: %u\n", value);
    printf("After left shift by 2: %u\n", leftShiftResult);
    printf("After right shift by 1: %u\n", rightShiftResult);

    return 0;
}

