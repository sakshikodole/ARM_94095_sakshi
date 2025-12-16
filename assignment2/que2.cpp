#include<stdio.h>
int main()
{
	unsigned char reg =0x2a;
	int n=3;
	if(reg&(1<<3))
	{
		printf("bit 3 is set");
	}
	else
	{
		printf("bit 3 is clear");
	}
}
