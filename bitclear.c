// CLEAR A BIT
#include<stdio.h>
void main()
{
        int num,pos;
        printf("Enter any number and position\n");
        scanf("%x%d",&num,&pos);
        printf("Before clearing a bit the number is %x\n",num);
        num=num&(~(1<<pos));
        printf("After claring a bit the number is %x\n",num);

}


