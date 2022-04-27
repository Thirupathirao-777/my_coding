// PRINTING ELEMENTS 
/**********************************
#include<stdio.h>
	void main()
	{
	
	int i,a[5]={10,20,30,40,50};
	i=0;
	
	printf("The adress of elements in array is\n");
	for(i=0;i<5;i++)
	{
		printf("address of a[%d]=%p\n",i,(a+i));
		printf("value of a[%d]=%d\n",i,*(a+i));
	}
	}
	
*******************************************/
// CALL BY VALUE
/************************************
#include<stdio.h>
void swap(int,int);
void main()
{
	int a=10,b=20;
	printf("Before swapping a=%d  b=%d\n",a,b);
	swap(a,b);
	printf("After swapping a=%d b=%d\n",a,b);
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a   =b;
	b   = temp;
}
******************************************/
// CALL BY REFERENCE
/*********************
#include<stdio.h>
void swap(int*,int*);
void main()
{
        int a=10,b=20;
        printf("Before swapping a=%d  b=%d\n",a,b);
        swap(&a,&b);
        printf("After swapping a=%d b=%d\n",a,b);
}
void swap(int *m, int *n)
{
        int temp;
        temp = *m;
        *m   = *n;
        *n   = temp;
}
******************/
/*****************************
#include<stdio.h>
void fun(int);
int *p;
void main()
{
        int a=10;
        p=&a;
        printf("%d\n",*p);
        fun(a);
        printf("%d\n",a);
        printf("%d\n",*p);
}
void fun(int m)
{
        *p=20;
        printf("%d\n",m);


}
**********************************/
/***********************************
#include<stdio.h>
void fun();
void main()
{
	fun();
	fun();
	fun();

}
void fun()
{
	int a=10;
	static int *p;
	*p= *p + a;
	printf("%d\n",*p);
}
********************************/
/********************************
#include<stdio.h>
void main()
{
	int a=20;
	char *ptr;
	ptr =(char*) &a;
	printf("%d",*ptr);
}
*********************************/
// WACP TO ADD TWO NUMBERS USING POINTERS
/********************************
#include<stdio.h>
void main()
{
        int n1,n2,sum;
	int *p1,*p2;
	p1=&n1;
	p2=&n2;
        printf("Enter p1 and p2 values\n");
	scanf("%d%d",p1,p2);
	sum=*p1+*p2;
	printf("the sum of two numbers are %d\n",sum);
}
****************************************/
// WACP TO SWAP TWO NUMBERS USING POINTERS
/****************************************
#include<stdio.h>
void main()
{
	int n1,n2,temp;
	int *p1,*p2;
	p1=&n1;
	p2=&n2;
	printf("Enter two numbers\n");
	scanf("%d%d",p1,p2);
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("p1=%d\n p2=%d\n",*p1,*p2);
}
******************************************/
//WACP TO INPUT AND PRINT ARRAY ELEMENTS USING POINTER
/*****************************************
#include<stdio.h>
void main()
{
	int a[100],i,n;
	int *p=a;
	printf("Enter size\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("The entered elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	

}
*************************************************/
//WACP TO COPY ONE ARRAY TO ANOTHER ARRAY
/***********************************************
#include<stdio.h>
void main()
{
        int a[100],b[100],i,n;
        
        printf("Enter size\n");
        scanf("%d",&n);
        printf("Enter the array elements for a\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",a+i);
        }
        printf("the array elements for a are\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(a+i));
        }
	printf("\nThe array elements for b are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(b+i));
	}
	printf("\nThe array elements after copying in b are\n");
	for(i=0;i<n;i++)
	{
		*(b+i)=*(a+i);
		printf(" %d\t",*(b+i));

	}


}
*****************************************************/
//WACP TO SWAP TEO ARRAYS USING POINTERS
/****************************************************
#include<stdio.h>
void main()
{
        int a[100],b[100],i,n,temp;
        
        printf("Enter size\n");
        scanf("%d",&n);
        printf("Enter the array elements for a\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",a+i);
        }

        printf("the array elements for a are\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(a+i));
        }
	 printf("\nEnter the array elements for b\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",b+i);
        }

        printf("\nThe array elements for b are \n");
        for(i=0;i<n;i++)
        {
                printf("%d",*(b+i));
        }
        printf("\nThe array elements after swapping a and b are\n");
	printf("\narray A\tarray B\n");

        for(i=0;i<n;i++)
        {
                temp=*(a+i);
		*(a+i)=*(b+i);
		*(b+i)=temp;
                printf(" %d\t%d\n",*(a+i),*(b+i));

        }
}
******************************************************/
//WACP TO REVERSE AN ARRAY
/******************************************************
#include<stdio.h>
void main()
{
	int a[100],i,n,temp;
	int *p=a;
	printf("Enter size\n");
	scanf("%d",&n);
	printf("Enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("\nThe elemnts in array are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\nAfter revese an array is\n");
	for(i=0;i<n/2;i++)
	{
		temp=*(p+i);
		*(p+i)=*((p+n-1-i));
		*((p+n-1-i))=temp;

		//printf("%d\t",*(p+i));
	}
	 for(i=0;i<n;i++)

	    printf("%d\t",*(p+i));


}
*********************************************************/
//wacp to search element in array
/**********************************************************
#include<stdio.h>
void main()
{
	int a[100],i,n,key,count=0;
	int *p=a;
        printf("Enter size\n");
        scanf("%d",&n);
        printf("Enter the elements in array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",(p+i));
        }
        printf("\nThe elemnts in array are\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(p+i));
	}
	printf("\nEnter key value\n");
	scanf("%d",&key);
	 for(i=0;i<n;i++)
        {

	if(*(a+i)==key)
	{
		count++;
	
	}
	}
	if(count==1)
	{
		printf("The key value matches with the given array element\n");
	}
	else
	{
		printf("The given value doesn't matches with the given array element\n");
	}
	
}
**************************************************************/
//WACP TO ACCESS TWO DIMENSIONAL ARRAY
/*************************************************************
#include <stdio.h>
void main()
{
	int a[50][50],rows,col,i,j;
	printf("Enter number of rows and column\n");
	scanf("%d%d",&rows,&col);
	printf("Enter the elements in an array\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the elements in an array are\n");
	 for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",*(*(a+i)+j));
                }
		printf("\n");
        }

        


	
}
*****************************************************/
//WACP TO ADD TWO MATRIX USING POINTERS
/*************************************************
#include <stdio.h>
void main()
{
        int a[50][50],b[50][50],r[50][50],rows,col,i,j;
        printf("Enter number of rows and column\n");
        scanf("%d%d",&rows,&col);
        printf("Enter the elements in A array\n");
        for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
	printf("\nEnter the elements in B array\n");
        for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

        printf("\nthe elements in A array are\n");
         for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",*(*(a+i)+j));
                }
                printf("\n");
        }
	 printf("\nthe elements in B array are\n");
         for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",*(*(b+i)+j));
                }
                printf("\n");
        }

	 printf("\nAfter adding two matrices the result is\n ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			*(*(r+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
			printf("%d\t",*(*(r+i)+j));
		
		}
		printf("\n");
	}
}
**********************************************************/
//WACP TO MULTIPLY TWO MATRIX USING POINTERS
/**********************************************************
#include <stdio.h>
void main()
{
        int a[50][50],b[50][50],r[50][50],rows,col,i,j,k;
        printf("Enter number of rows and column\n");
        scanf("%d%d",&rows,&col);
        

	if(col==rows)
	{
	printf("Enter the elements in A array\n");
        for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

        printf("\nEnter the elements in B array\n");
        for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

        printf("\nthe elements in A array are\n");
         for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",*(*(a+i)+j));
                }
                printf("\n");
        }
         printf("\nthe elements in B array are\n");
         for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",*(*(b+i)+j));
                }
                printf("\n");
        }

         printf("\nAfter multiplying  two matrices the result is\n ");
        for(i=0;i<rows;i++)
        {
                for(j=0;j<col;j++)
                {
			 *(*(r+i)+j)=0;
			for(k=0;k<col;k++)
			{
                        *(*(r+i)+j)= *(*(r+i)+j) + (*(*(a+i)+k) *  *(*(b+k)+j));

			}
			printf("%d\t",*(*(r+i)+j));

                
                }
                printf("\n");
        }
	}
	else
	{
	printf("Not possible to multiply\n");
	}
}
**************************************************/
//WACP TO RETURN MORETHAN ONE VALUE
#include<stdio.h>
void fun(int x,int y,int *sum,int *diff,int *mul);
void main()
{
	int x=20,y=10,sum,diff,mul;
	fun(x,y,&sum,&diff,&mul);
	printf("sum=%d\ndiff=%d\nmul=%d\n",sum,diff,mul);
	
}
void fun(int x,int y,int *sum,int *diff,int *mul)
{
	*sum=x+y;
	*diff=x-y;
	*mul=x*y;
}
