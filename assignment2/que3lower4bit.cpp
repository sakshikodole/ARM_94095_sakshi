#include<stdio.h>
int main()
{
	unsigned int reg=0xABCD;
	unsigned int mask=0x0F;
	unsigned int lower_4_bits=reg&mask;
	printf("org value of reg = 0x%X \n",reg);
	printf("masking value = 0x%X \n",mask);
	printf("lower 4bit hexadecimal value = 0x%X \n",lower_4_bits);
	return 0;
}
