#include <stdio.h>
void main()
{
	int i,a,sum=0;

	printf("enter the ending number:");
    scanf("%d", &a);

    i=1;

    while(i<=a)
    {
    	sum=sum+(i*i);
    	i++;
    }
    printf("Sum of %d number=%d\n",a,sum );
}