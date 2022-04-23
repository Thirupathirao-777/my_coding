// SET A BIT
#include<stdio.h>
void main()
{
        int num,pos;
        printf("Enter any number and position\n");
        scanf("%x%d",&num,&pos);
        printf("Before setting a bit the number is %x\n",num);
        num=num|(1<<pos);
        printf("After setting a bit the number is %x\n",num);

}

