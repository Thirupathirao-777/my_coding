#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter any number and position\n");
	scanf("%x%d",&num,&pos);
	printf("Before toggling a bit %x\n",num);
	num=num^(1<<pos);
	printf("After togging bit %x\n",num);

}
