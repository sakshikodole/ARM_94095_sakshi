#include<stdio.h>
int main()
{
	unsigned char reg=0x2a;
	int n=5;
	reg=reg^(1<<5);
	printf("result in hexdecimal = 0x%X \n",reg);
	printf("result in binary  " );
	for(int i=7;i>=0;i--)
	{
		printf("%d",(reg>>i)&1);

	}

	printf("\n");
	
}
