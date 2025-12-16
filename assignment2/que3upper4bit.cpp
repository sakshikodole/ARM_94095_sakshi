#include<stdio.h>
#include<stdint.h>
int main()
{
	unsigned int reg=0xABCD;
	unsigned int mask=0xF0;
	unsigned int upper_bit_isolated=reg&mask;
	unsigned int upper_4_bits= upper_bit_isolated;
	printf("org value of reg = 0x%X \n",reg);
	printf("masking value = 0x%X \n",mask);
	printf("upper 4bit hexadecimal value = 0x%X \n",upper_4_bits);
	return 0;
}
